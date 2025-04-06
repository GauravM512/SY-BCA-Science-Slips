<?//Write a PHP script to declare three variables and print maximum among them.?>

<!DOCTYPE html>
<html>
<head>
    <title>Find Maximum Number</title>
</head>
<body>

<form method="post">
    <label>Enter First Number:</label>
    <input type="number" name="num1" required><br><br>

    <label>Enter Second Number:</label>
    <input type="number" name="num2" required><br><br>

    <label>Enter Third Number:</label>
    <input type="number" name="num3" required><br><br>

    <button type="submit" name="submit">Find Maximum</button>
</form>

<?php
if (isset($_POST['submit'])) {
    $a = $_POST['num1'];
    $b = $_POST['num2'];
    $c = $_POST['num3'];

    $max = $a;
    if ($b > $max) $max = $b;
    if ($c > $max) $max = $c;

    echo "<p>Maximum number is: $max</p>";
}
?>
</body>
</html>
