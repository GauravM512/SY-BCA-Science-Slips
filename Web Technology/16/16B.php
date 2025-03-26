<!DOCTYPE html>
<html lang="en">
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
$data = array(
    "one" => 1,
    "two" => 2,
    "three" => 3,
    "four" => 4
);

function reverseKeyValue($array) {
    return array_flip($array);
}

function shuffleAssociative($array) {
    $keys = array_keys($array);
    shuffle($keys);

    $shuffledArray = [];
    foreach ($keys as $key) {
        $shuffledArray[$key] = $array[$key];
    }
    return $shuffledArray;
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $choice = $_POST["choice"];

    echo "<h3>Result:</h3>";
    echo "<pre>";

    switch ($choice) {
        case '1':
            echo "Reversed Key-Value Pairs:\n";
            print_r(reverseKeyValue($data));
            break;
        case '2':
            echo "Array in Random Order:\n";
            print_r(shuffleAssociative($data));
            break;
        case '3':
            echo "Original Array:\n";
            print_r($data);
            break;
        case '4':
            echo "Exiting program...";
            exit;
        default:
            echo "Invalid choice. Please try again.";
    }

    echo "</pre>";
}
?>

</body>
</html>
