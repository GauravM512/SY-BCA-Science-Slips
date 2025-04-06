<?/*Write class declarations and member function definitions for Teacher (code, name, qualification). 
Derive teach_account(account_no,joining_date) from Teacher and teach_sal(basic_pay, earnings, deduction) 
fromteach_account. Write a menu driven program
    To build a master table To sort all entries
    To search an entry
    Display salary of all teachers.
*/?>

<?php
session_start();

class Teacher {
    public $tid, $nam, $qua;
    function __construct($tid, $nam, $qua) {
        $this->tid = $tid;
        $this->nam = $nam;
        $this->qua = $qua;
    }
}

class TeacherAcc extends Teacher {
    public $acc, $jdt;
    function __construct($tid, $nam, $qua, $acc, $jdt) {
        parent::__construct($tid, $nam, $qua);
        $this->acc = $acc;
        $this->jdt = $jdt;
    }
}

class TeacherSal extends TeacherAcc {
    public $bas, $ern, $ded;
    function __construct($tid, $nam, $qua, $acc, $jdt, $bas, $ern, $ded) {
        parent::__construct($tid, $nam, $qua, $acc, $jdt);
        $this->bas = $bas;
        $this->ern = $ern;
        $this->ded = $ded;
    }

    function calcSal() {
        return $this->bas + $this->ern - $this->ded;
    }
}

if (!isset($_SESSION['data'])) {
    $_SESSION['data'] = [];
}

if ($_SERVER['REQUEST_METHOD'] == 'POST' && isset($_POST['submit'])) {
    $tid = $_POST['tid'];
    $nam = $_POST['nam'];
    $qua = $_POST['qua'];
    $acc = $_POST['acc'];
    $jdt = $_POST['jdt'];
    $bas = $_POST['bas'];
    $ern = $_POST['ern'];
    $ded = $_POST['ded'];

    $t = new TeacherSal($tid, $nam, $qua, $acc, $jdt, $bas, $ern, $ded);
    $_SESSION['data'][] = $t;
}

if (isset($_GET['act'])) {
    $act = $_GET['act'];
    switch ($act) {
        case 'build':
            echo "Master table built.<br>";
            break;

        case 'sort':
            usort($_SESSION['data'], fn($a, $b) => strcmp($a->nam, $b->nam));
            echo "Sorted by name.<br>";
            break;

        case 'search':
            $findId = $_GET['tid'];
            $found = false;
            foreach ($_SESSION['data'] as $t) {
                if ($t->tid == $findId) {
                    echo "Found:<br>";
                    echo "Name: $t->nam<br>";
                    echo "Qual: $t->qua<br>";
                    echo "Acc: $t->acc<br>";
                    echo "Join Date: $t->jdt<br>";
                    $found = true;
                    break;
                }
            }
            if (!$found) echo "No record with ID: $findId<br>";
            break;

        case 'salary':
            echo "Salaries:<br>";
            foreach ($_SESSION['data'] as $t) {
                echo "Name: $t->nam, Salary: ".$t->calcSal()."<br>";
            }
            break;

        default:
            echo "Invalid action.<br>";
    }
}
?>

<!DOCTYPE html>
<html>
<head><title>Teacher Info</title></head>
<body>

<h2>Enter Teacher Details</h2>
<form method="POST">
    ID: <input type="text" name="tid"><br>
    Name: <input type="text" name="nam"><br>
    Qualification: <input type="text" name="qua"><br>
    Account No: <input type="text" name="acc"><br>
    Join Date: <input type="date" name="jdt"><br>
    Basic Salary: <input type="number" name="bas"><br>
    Earnings: <input type="number" name="ern"><br>
    Deductions: <input type="number" name="ded"><br>
    <input type="submit" name="submit" value="Save">
</form>

<h3>Menu</h3>
<form method="GET">
    <label><input type="radio" name="act" value="build" onclick="this.form.submit()"> Build</label><br>
    <label><input type="radio" name="act" value="sort" onclick="this.form.submit()"> Sort</label><br>
    <label><input type="radio" name="act" value="search" onclick="showSearch()"> Search</label><br>
    <div id="searchBox"></div>
    <label><input type="radio" name="act" value="salary" onclick="this.form.submit()"> Show Salary</label><br>
</form>

<script>
function showSearch() {
    document.getElementById('searchBox').innerHTML =
        'Enter ID: <input type="text" name="tid"> <input type="submit" value="Search">';
}
</script>

</body>
</html>
