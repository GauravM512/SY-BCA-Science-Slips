<?/*Declare array. Reverse the order of elements, making the first element last and 
last element first and similarly rearranging other array elements.[Hint : array_reverse()]*/?>

<!DOCTYPE html>
<html>
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

$rev_Array = array_reverse($students);

echo "<b>Reversed Array:</b><br>";
echo "<pre>";
print_r($rev_Array);
echo "</pre>";
?>
</body>
</html>
