<?php
$students = [
    "Sanchet", "Gaurav", "Ajinkya", "Harshita", "Harsh", "Ramanuj", 
    "Dinesh", "Khusboo", "Vaishnavi", "Urmila", "Pratik", 
    "Amit", "Anita","Ishita"
];

$q = isset($_GET['q']) ? strtolower($_GET['q']) : '';

if (strlen($q) > 0) {
    $matches = [];

    foreach ($students as $student) {
        if (stripos($student, $q) !== false) {
            $matches[] = $student;
        }
    }

    if (count($matches) > 0) {
        foreach ($matches as $match) {
            echo "<p>$match</p>";
        }
    } else {
        echo "<p>No matches found</p>";
    }
}
?>
