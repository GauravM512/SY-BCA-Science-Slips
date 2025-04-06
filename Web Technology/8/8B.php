<?/*Declare a Multidimensional Array. Display specific element from a Multidimensional array.
 Also delete given element from the Multidimensional array.(After each operation display array content.)*/?>

<!DOCTYPE html>
<html>
<head>
    <title>Multidimensional Array Operations</title>
</head>
<body>

<h2>Multidimensional Array Operations</h2>

<?php
$multiArray = array(
    array("Sanchet", "Kolekar", 22),
    array("Pratik", "Pawar", 21),
    array("Dinesh", "Sathe", 22)
);

echo "Original Array:";
echo "<pre>";
print_r($multiArray);
echo "</pre>";

echo "<br><br><b>Specific Element (3rd Row, First Name):</b><br>";
echo $multiArray[2][0]; 

unset($multiArray[2][0]);
echo "<br><br><b>Array After Deletion (Removing 'Dinesh'):</b><br>";
echo "<pre>";
print_r($multiArray);
echo "</pre>";
?>

</body>
</html>
