<!DOCTYPE html>
<html>
<body>
<form method="post">
Enter a string: <input type="text" name="inputStr">
<input type="submit" value="Submit">
</form>
</body>
</html>
<?php if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $str = strtolower($_POST["inputStr"]);
    $vowels = ["a", "e", "i", "o", "u"];
    $total = 0;
    echo "<h3>Vowel Count Results:</h3>";
    foreach ($vowels as $v) {
        $count = substr_count($str, $v);
        echo "Vowel '$v' occurs $count times.<br>";
        $total += $count;
    }
    echo "Total number of vowels: $total";
}
?>
