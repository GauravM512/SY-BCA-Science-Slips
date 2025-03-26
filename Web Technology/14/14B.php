<!DOCTYPE html>
<html lang="en">
<head>
    <title>String Operations</title>
</head>
<body>

<form method="post">
    String 1: <input type="text" name="str1" required><br><br>
    String 2: <input type="text" name="str2" required><br><br>
    Reverse from position: <input type="number" name="pos" min="0" required><br><br>
    <button type="submit" name="submit">Process</button>
</form>

<?php
if (isset($_POST['submit'])) {
    $s1 = $_POST['str1'];
    $s2 = $_POST['str2'];
    $pos = (int)$_POST['pos'];

    echo "<p>Using == : " . ($s1 == $s2 ? "Equal" : "Not equal") . "</p>";
    echo "<p>Using strcmp() : " . (strcmp($s1, $s2) == 0 ? "Equal" : "Not equal") . "</p>";

    $combined = $s1 . $s2;

    if ($pos >= 0 && $pos <= strlen($combined)) {
        $prefix = substr($combined, 0, $pos);
        $suffix = substr($combined, $pos);
        $reversed = strrev($suffix);
        echo "<p>Final string: " . $prefix . $reversed . "</p>";
    } else {
        echo "<p>Invalid position. It should be between 0 and " . strlen($combined) . ".</p>";
    }
}
?>
</body>
</html>
