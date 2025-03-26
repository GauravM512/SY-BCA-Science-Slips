<!DOCTYPE html>
<html lang="en">
<head>
    <title>Associative Array Operations</title>
</head>
<body>
    <form method="post">
        <label>Select an operation:</label><br>
        <input type="radio" name="choice" value="1" required> Display elements of the array along with keys<br>
        <input type="radio" name="choice" value="2"> Display the size of the array<br>
        <input type="submit" name="submit" value="Perform Operation">
    </form>

<?php
if (isset($_POST['submit'])) {
    $associativeArray = array(
        "Name" => "Sanchet Kolekar",
        "Age" => 22,
        "City" => "PUNE",
        "Country" => "INDIA"
    );

    $choice = $_POST['choice'];

    switch ($choice) {
        case '1':
            echo "<h3>Elements of the array along with keys:</h3>";
            foreach ($associativeArray as $key => $value) {
                echo "$key : $value<br>";
            }
            break;

        case '2':
            echo "<h3>Size of the array:</h3>";
            echo count($associativeArray);
            break;

        default:
            echo "Invalid choice.";
    }
}
?>
</body>
</html>
