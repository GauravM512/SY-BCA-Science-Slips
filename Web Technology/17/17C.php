<?/*Define a class Employee having private members – id, name, department, salary. Define parameterized constructors. 
Create a subclass called “Manager” with private member bonus. 
Create 3 objects of the Manager class and display the details of the manager having the maximum total salary (salary + bonus).*/?>

<!DOCTYPE html>
<html>
<head>
    <title>Manager Salary Details</title>
</head>
<body>

<h2>Manager Salary Details</h2>

<?php
class Emp {
    private $id, $name, $dept, $sal;

    public function __construct($id, $name, $dept, $sal) {
        $this->id = $id;
        $this->name = $name;
        $this->dept = $dept;
        $this->sal = $sal;
    }

    public function getSal() {
        return $this->sal;
    }

    public function getDetails() {
        return "ID: $this->id, Name: $this->name, Dept: $this->dept, Salary: $this->sal";
    }
}

class Mgr extends Emp {
    private $bonus;

    public function __construct($id, $name, $dept, $sal, $bonus) {
        parent::__construct($id, $name, $dept, $sal);
        $this->bonus = $bonus;
    }

    public function getTotal() {
        return $this->getSal() + $this->bonus;
    }

    public function getDetails() {
        return parent::getDetails() . ", Bonus: $this->bonus, Total: " . $this->getTotal();
    }
}

$m1 = new Mgr(101, "Sanchet", "IT", 70000, 15000);
$m2 = new Mgr(102, "Gaurav", "HR", 65000, 20000);
$m3 = new Mgr(103, "Ajinkya", "Finance", 80000, 12000);

$managers = [$m1, $m2, $m3];

echo "<b>All Manager Details:</b><br>";
foreach ($managers as $m) {
    echo $m->getDetails() . "<br>";
}

$max = $managers[0];

foreach ($managers as $m) {
    if ($m->getTotal() > $max->getTotal()) {
        $max = $m;
    }
}

echo "<br><b>Manager with Maximum Salary:</b><br>";
echo $max->getDetails();
?>

</body>
</html>
