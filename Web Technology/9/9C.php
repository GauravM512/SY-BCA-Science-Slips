<?/*Sales_order (sonumber, s_order_date)
    a. Client (clientno, name, address)
    b. A client can give one or more sales_orders, but a sales_order belongs to exactly one client.
    c. Accept sales order date from the user. 
Write a PHP script which will display all orders which are placed before that date.*/?>

<?php

$db = pg_connect("host=localhost dbname=sales_db user=postgres password=root") or die("Could not connect to database");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $date = $_POST['date'];
    
    $sql = "SELECT s.sonumber, s.s_order_date, c.name, c.address
            FROM Sales_order s
            JOIN Client c ON s.clientno = c.clientno
            WHERE s.s_order_date < '$date'";
    
    $result = pg_query($db, $sql) or die("Cannot Execute Query");
    
    if (pg_num_rows($result) > 0) {
        echo "<h3>Sales Orders Before $date:</h3>";
        echo "<table border='1'>
                <tr>
                    <th>Order Number</th>
                    <th>Order Date</th>
                    <th>Client Name</th>
                    <th>Address</th>
                </tr>";
        while ($row = pg_fetch_assoc($result)) {
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
}

pg_close($db);
?>

<!DOCTYPE html>
<html>
<head>
    <title>Sales Orders Before Date</title>
</head>
<body>
    <h3>Enter Date to Find Sales Orders Before It:</h3><br>
    <form method="post">
        Enter Date:<input type="date" name="date" required>
        <button type="submit">Search</button>
    </form>
</body>
</html>
