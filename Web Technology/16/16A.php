<!DOCTYPE html>
<html lang="en">
<head>
    <title>Prime Number Checker</title>
</head>
<body>
    <h2>Check if a Number is Prime</h2>
    <form method="post">
        Enter a Number: <input type="number" name="num" required>
        <button type="submit">Check</button>
    </form>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $num = intval($_POST["num"]);

    if ($num <= 1) {
        echo "<p>$num is not a prime number.</p>";
    } else {
        $isPrime = true;
        for ($i = 2; $i <= sqrt($num); $i++) {
            if ($num % $i == 0) {
                $isPrime = false;
                break;
            }
        }
        echo $isPrime ? "<p>$num is a prime number.</p>" : "<p>$num is not a prime number.</p>";
    }
}
?>
</body>
</html>
