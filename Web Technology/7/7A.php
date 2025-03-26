<!DOCTYPE html>
<html>
    <body>
        <form method="post">
            Enter a string: <input type="text" name="str">
            <input type="submit" value="Reverse">
        </form>
    </body>
</html>
<?php
    function reverseString($s){
        return strrev($s);
    }
    if ($_POST) {
        echo "Reversed: " . reverseString($_POST["str"]);
    }
?>
