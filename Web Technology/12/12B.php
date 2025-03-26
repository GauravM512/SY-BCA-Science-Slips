<!DOCTYPE html>
<html>
<body>
    <form method="post">
        Number 1: <input type="text" name="num1"><br>
        Number 2: <input type="text" name="num2"><br>
        Operation: <br>
        <input type="radio" name="op" value="add" checked> Add<br>
        <input type="radio" name="op" value="sub"> Subtract<br>
        <input type="radio" name="op" value="mul"> Multiply<br>
        <input type="radio" name="op" value="div"> Divide<br>
        <input type="submit" name="submit" value="Calculate">
    </form>
</body>
</html>
<?php
    function calculate($a, $b, $op = "add")
    {
        switch ($op) {
            case "add":
                return $a + $b;
            case "sub":
                return $a - $b;
            case "mul":
                return $a * $b;
            case "div":
                return $b != 0 ? $a / $b : "Cannot divide by zero";
            default:
                return "Invalid operation";
        }
    }
    if (isset($_POST["submit"])) {
        $n1 = $_POST["num1"];
        $n2 = $_POST["num2"];
        $op = $_POST["op"];
        echo "Result: " . calculate($n1, $n2, $op);
    }

?>
