<?php
$host = "localhost";
$user = "root";
$pass = "";
$db = "sales_db";

$conn = new mysqli($host, $user, $pass, $db);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $date = $_POST['date'];
    
    $sql = "SELECT s.sonumber, s.s_order_date, c.name, c.address 
            FROM Sales_order s
            JOIN Client c ON s.clientno = c.clientno
            WHERE s.s_order_date < ?";
    
    $stmt = $conn->prepare($sql);
    $stmt->bind_param("s", $date);
    $stmt->execute();
    
    $result = $stmt->get_result();
    
    if ($result->num_rows > 0) {
        echo "<h3>Sales Orders Before $date:</h3>";
        echo "<table border='1'>
                <tr>
                    <th>Order Number</th>
                    <th>Order Date</th>
                    <th>Client Name</th>
                    <th>Address</th>
                </tr>";
        while ($row = $result->fetch_assoc()) {
            echo "<tr>
                    <td>{$row['sonumber']}</td>
                    <td>{$row['s_order_date']}</td>
                    <td>{$row['name']}</td>
                    <td>{$row['address']}</td>
                  </tr>";
        }
        echo "</table>";
    } else {
        echo "No orders found before $date.";
    }

    $stmt->close();
}
$conn->close();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Sales Orders Before Date</title>
</head>
<body>
    <h2>Enter Date to Find Sales Orders Before It:</h2>
    <form method="post">
        <label for="date">Enter Date:</label>
        <input type="date" name="date" required>
        <button type="submit">Search</button>
    </form>
</body>
</html>
