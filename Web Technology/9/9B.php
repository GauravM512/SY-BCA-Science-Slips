<?/*Write a menu driven program to perform the following stack related operations.
a) Insert an element in stack.
b) Delete an element from stack.[Hint: array_push(), array_pop()]*/?>

<?php
session_start();

if (!isset($_SESSION['stack'])) {
    $_SESSION['stack'] = [];
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $choice = $_POST['choice'];

    switch ($choice) {
        case '1': 
            if (!empty($_POST['element'])) {
                $element = $_POST['element'];
                array_push($_SESSION['stack'], $element);
                echo "<br>Inserted: $element";
            } else {
                echo "<br>Please enter an element to insert.";
            }
            break;

        case '2': 
            if (!empty($_SESSION['stack'])) {
                $deleted = array_pop($_SESSION['stack']);
                echo "<br>Deleted: $deleted";
            } else {
                echo "<br>Stack is empty. Cannot delete element.";
            }
            break;

        case '3': 
            if (!empty($_SESSION['stack'])) {
                echo "<br>Stack: ";
                foreach ($_SESSION['stack'] as $item) {
                    echo $item . " ";
                }
            } else {
                echo "<br>Stack is empty.";
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
    <title>Stack Operations</title>
</head>
<body>
    <h2>Menu-Driven Stack Operations</h2>

    <form method="post">
        <label>Select Operation:</label><br>
        <input type="radio" name="choice" value="1" required> Insert Element<br>
        <input type="radio" name="choice" value="2"> Delete Element<br>
        <input type="radio" name="choice" value="3"> Display Stack<br>
        <input type="radio" name="choice" value="4"> Exit<br><br>

        <label>Element (if inserting):</label>
        <input type="text" name="element"><br><br>

        <button type="submit">Submit</button>
    </form>
</body>
</html>


