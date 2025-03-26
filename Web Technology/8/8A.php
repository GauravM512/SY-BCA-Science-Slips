<!DOCTYPE html>
<html>
<body>
    <form method="post">
        Enter string: <input type="text" name="str">
        <input type="submit" value="Check">
    </form>
</body>
</html>
<?php 
    if ($_POST) {
        $s = $_POST["str"];
        if ($s == strrev($s)) {
            echo "$s is a Palindrome";
        } else {
            echo "$s is not a Palindrome";
        }
    }
?>
