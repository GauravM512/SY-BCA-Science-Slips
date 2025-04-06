<?/*Write a menu driven program the following operation on an associative array
a) Reverse the order of each element’s key-value pair. [Hint: array_flip()]
b) Traverse the element in an array in random order. [Hint: shuffle()] [20 Marks]*/?>

<!DOCTYPE html>
<html>
<head>
    <title>Associative Array Operations</title>
</head>
<body>

<h2>Associative Array Operations</h2>
<form method="post">
    <label>Select Operation:</label><br>
    <input type="radio" name="choice" value="1" required> Reverse Key-Value Pairs<br>
    <input type="radio" name="choice" value="2"> Random Order Traversal<br>
    <input type="radio" name="choice" value="3"> Display Original Array<br>
    <input type="radio" name="choice" value="4"> Exit<br><br>
    <button type="submit">Submit</button>
</form>

<?php
$data = array("one" => 1, "two" => 2, "three" => 3, "four" => 4);

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $choice = $_POST["choice"];
    echo "<h3>Result:</h3><pre>";

    switch ($choice) {
        case '1':
            print_r(array_flip($data));  // Reverse key-value pairs
            break;
        case '2':
            shuffle($data);  // Shuffle array values
            print_r($data);
            break;
        case '3':
            print_r($data);  // Display original array
            break;
        case '4':
            exit("Exiting program...");
        default:
            echo "Invalid choice.";
    }

    echo "</pre>";
}
?>

</body>
</html>

