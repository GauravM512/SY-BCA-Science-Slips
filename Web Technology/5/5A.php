<!DOCTYPE html>
<html lang="en">
<head>
    <title>Armstrong Number Checker</title>
</head>
<body>
    <h2>Check Armstrong Number</h2>
    <form method="post">
        Enter a number: 
        <input type="number" name="num" required>
        <input type="submit" value="Check">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $num = $_POST['num'];
        $sum = 0;
        $temp = $num;
        $digits = strlen((string)$num);

        while ($temp != 0) {
            $digit = $temp % 10;
            $sum += pow($digit, $digits);  
            $temp = (int)($temp / 10);
        }

        if ($sum == $num) {
            echo "<h3>$num is an Armstrong number.</h3>";
        } else {
            echo "<h3>$num is not an Armstrong number.</h3>";
        }
    }
    ?>
</body>
</html>
