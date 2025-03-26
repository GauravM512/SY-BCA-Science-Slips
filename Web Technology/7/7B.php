<!DOCTYPE html>
<html lang="en">
<head>
    <title>Array Reverse</title>
</head>
<body>

<h2>Original and Reversed Array</h2>

<?php
$students = ["Sanchet", "Gaurav", "Ajinkya", "Harshita", "Harsh", "Ramanuj", "Dinesh", "Khusboo", "Vaishnavi", "Urmila", "Pratik"];

echo "<b>Original Array:</b><br>";
echo "<pre>";
print_r($students);
echo "</pre>";

$reversedArray = array_reverse($students);

echo "<b>Reversed Array:</b><br>";
echo "<pre>";
print_r($reversedArray);
echo "</pre>";
?>

</body>
</html>
