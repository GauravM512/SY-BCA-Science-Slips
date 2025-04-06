<?/*Write a menu driven program to perform the following queue related operations
a) Insert an element in queue
b) Delete an element from queue
c) Display the contents of queue*/?>

<?php
session_start();

if (!isset($_SESSION['Queue'])) {
    $_SESSION['Queue'] = [];
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $choice = $_POST['choice'];

    switch ($choice) {
        case '1': 
            if (!empty($_POST['element'])) {
                $element = $_POST['element'];
                array_push($_SESSION['Queue'], $element);
                echo "<br>Inserted: $element";
            } else {
                echo "<br>Please enter an element to insert.";
            }
            break;

        case '2': 
            if (!empty($_SESSION['Queue'])) {
                $deleted = array_shift($_SESSION['Queue']);
                echo "<br>Deleted: $deleted";
            } else {
                echo "<br>Queue is empty. Cannot delete element.";
            }
            break;

        case '3': 
            if (!empty($_SESSION['Queue'])) {
                echo "<br>Queue: ";
                foreach ($_SESSION['Queue'] as $item) {
                    echo $item . " ";
                }
            } else {
                echo "<br>Queue is empty.";
            }
            break;

        case '4': 
            echo "<br>Exiting program...";
            session_destroy();
            exit();
            break;

        default:
            echo "<br>Invalid choice. Try again.";
    }
}
?>
<!DOCTYPE html>
<html>
<head>
    <title>Queue Operations</title>
</head>
<body>
    <h2>Menu-Driven Queue Operations</h2>

    <form method="post">
        <label>Select Operation:</label><br>
        <input type="radio" name="choice" value="1" required> Insert element into the queue<br>
        <input type="radio" name="choice" value="2">  Delete element from the queue<br>
        <input type="radio" name="choice" value="3"> Display Queue<br>
        <input type="radio" name="choice" value="4"> Exit<br><br>

        <label>Element (if inserting):</label>
        <input type="text" name="element"><br><br>

        <button type="submit">Submit</button>
    </form>
</body>
</html>


