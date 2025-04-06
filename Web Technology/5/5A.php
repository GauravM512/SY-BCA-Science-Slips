<?//Write a PHP script to check number 153 is Armstrong or not.?>

<!DOCTYPE html>
<html>
<head>
    <title>Armstrong Number Checker</title>
</head>
<body>
    <h2>Armstrong Number Checker</h2>

    <form method="post">
        Enter a number:
        <input type="number" name="num" required>
        <input type="submit" value="Check">
    </form>

<?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $num = $_POST["num"];
        $sum = 0;
        $temp = $num;
        $len = strlen($num);

        while ($temp > 0) {
            $digit = $temp % 10;
            $sum += pow($digit, $len);
            $temp = (int)($temp / 10);
        }

        if ($sum == $num) {
            echo "$num is an Armstrong number.";
        } else {
            echo "$num is not an Armstrong number.";
        }
    }
?>
</body>
</html>
