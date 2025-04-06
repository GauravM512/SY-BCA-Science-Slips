<?php
/* Write a PHP script for the following:
   Design a form to accept the details of 5 different items,
   such as item code, item name, units sold, rate.
   Display the bill in tabular format.
   Use only 4 text boxes. (Hint: Use explode function.) */
?>

<!DOCTYPE html>
<html>
<head>
    <title>Simple Bill Generator</title>
</head>
<body>
    <h2>Enter Details for 5 Items</h2>

    <form method="post">
        <label>Item Codes (comma-separated):</label><br>
        <input type="text" name="codes" required><br><br>

        <label>Item Names (comma-separated):</label><br>
        <input type="text" name="names" required><br><br>

        <label>Units Sold (comma-separated):</label><br>
        <input type="text" name="units" required><br><br>

        <label>Rates (comma-separated):</label><br>
        <input type="text" name="rates" required><br><br>

        <input type="submit" value="Show Bill">
    </form>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $codes = explode(",", $_POST['codes']);
    $names = explode(",", $_POST['names']);
    $units = explode(",", $_POST['units']);
    $rates = explode(",", $_POST['rates']);

    if (count($codes) == 5 && count($names) == 5 && count($units) == 5 && count($rates) == 5) {
        echo "<h3>Bill Details:</h3>";
        echo '<table border="1"cellpadding="10" style="text-align:center; border-collapse: collapse;">
                <tr>
                    <th>Code</th>
                    <th>Name</th>
                    <th>Units</th>
                    <th>Rate</th>
                    <th>Total</th>
                </tr>';

        $grand = 0;

        for ($i = 0; $i < 5; $i++) {
            $total = $units[$i] * $rates[$i];
            $grand += $total;

            echo "<tr>
                    <td>{$codes[$i]}</td>
                    <td>{$names[$i]}</td>
                    <td>{$units[$i]}</td>
                    <td>{$rates[$i]}</td>
                    <td>{$total}</td>
                  </tr>";
        }

        echo "<tr>
                <td colspan='4'><b>Grand Total</b></td>
                <td><b>{$grand}</b></td>
              </tr>";
        echo "</table>";
    } else {
        echo "<p style='color:red;'>⚠️ Please enter exactly 5 values in each field.</p>";
    }
}
?>
</body>
</html>
