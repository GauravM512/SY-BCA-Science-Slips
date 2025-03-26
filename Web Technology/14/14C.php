<?php
session_start();

class Teacher 
{
    public $code;
    public $name;
    public $qualification;

    public function __construct($code, $name, $qualification) {
        $this->code = $code;
        $this->name = $name;
        $this->qualification = $qualification;
    }
}

class TeachAccount extends Teacher {
    public $account_no;
    public $joining_date;

    public function __construct($code, $name, $qualification, $account_no, $joining_date) {
        parent::__construct($code, $name, $qualification);
        $this->account_no = $account_no;
        $this->joining_date = $joining_date;
    }
}


class TeachSal extends TeachAccount {
    public $basic_pay;
    public $earnings;
    public $deduction;

    public function __construct($code, $name, $qualification, $account_no, $joining_date, $basic_pay, $earnings, $deduction) {
        parent::__construct($code, $name, $qualification, $account_no, $joining_date);
        $this->basic_pay = $basic_pay;
        $this->earnings = $earnings;
        $this->deduction = $deduction;
    }

    public function calculateSalary() {
        return $this->basic_pay + $this->earnings - $this->deduction;
    }
}

if (!isset($_SESSION['teachers'])) {
    $_SESSION['teachers'] = [];
}

if ($_SERVER['REQUEST_METHOD'] == 'POST' && isset($_POST['submit'])) {
    $code = $_POST['code'];
    $name = $_POST['name'];
    $qualification = $_POST['qualification'];
    $account_no = $_POST['account_no'];
    $joining_date = $_POST['joining_date'];
    $basic_pay = $_POST['basic_pay'];
    $earnings = $_POST['earnings'];
    $deduction = $_POST['deduction'];

    $teacher = new TeachSal($code, $name, $qualification, $account_no, $joining_date, $basic_pay, $earnings, $deduction);
    $_SESSION['teachers'][] = $teacher;
}

if (isset($_GET['action'])) {
    $action = $_GET['action'];

    switch ($action) {
        case 'build_table':
            echo "Master table has been built.<br>";
            break;

        case 'sort_entries':
            usort($_SESSION['teachers'], function ($a, $b) 
            {
                return strcmp($a->name, $b->name);
            });

            echo "Entries have been sorted by name.<br>";
            break;

        case 'search_entry':
            $search_code = $_GET['search_code'];
            $found = false;
            foreach ($_SESSION['teachers'] as $teacher) {
                if ($teacher->code == $search_code) {
                    echo "Teacher found: Name: {$teacher->name}, Qualification: {$teacher->qualification}, Account No: {$teacher->account_no}, Joining Date: {$teacher->joining_date}<br>";
                    $found = true;
                    break;
                }
            }
            if (!$found) {
                echo "No teacher found with code: $search_code<br>";
            }
            break;

        case 'display_salaries':
            echo "<h2>Teacher Salaries:</h2>";
            foreach ($_SESSION['teachers'] as $teacher) {
                $salary = $teacher->calculateSalary();
                echo "Name: {$teacher->name}, Salary: $salary<br>";
            }
            break;

        default:
            echo "Invalid action.<br>";
    }
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>A4SetA3</title>
</head>
<body>

<h1>Teacher Information Form</h1>
<form action="14C.php" method="POST">
    Code: <input type="text" name="code"><br>
    Name: <input type="text" name="name"><br>
    Qualification: <input type="text" name="qualification"><br>
    Account No: <input type="text" name="account_no"><br>
    Joining Date: <input type="date" name="joining_date"><br>
    Basic Pay: <input type="number" name="basic_pay"><br>
    Earnings: <input type="number" name="earnings"><br>
    Deduction: <input type="number" name="deduction"><br>
    <input type="submit" name="submit" value="Submit">
</form>

<h2>Menu</h2>
<form action="14C.php" method="GET">
    <label>
        <input type="radio" name="action" value="build_table" onclick="this.form.submit()"> Build Master Table
    </label><br>
    <label>
        <input type="radio" name="action" value="sort_entries" onclick="this.form.submit()"> Sort Entries
    </label><br>
    <label>
        <input type="radio" name="action" value="search_entry" onclick="getindex()"> Search Entry
    </label><br>
    <div id="inputs"></div>
    <script>
        function getindex() 
        {
            const inputsDiv = document.getElementById('inputs');
            inputsDiv.innerHTML = '';
            inputsDiv.innerHTML = 'Enter Code: <input type="number" name="search_code" required><br><input type = "submit" value = "Search"/>';
        }
    </script>
    <label>
        <input type="radio" name="action" value="display_salaries" onclick="this.form.submit()"> Display Salaries
    </label><br>
</form>

</body>
</html>
