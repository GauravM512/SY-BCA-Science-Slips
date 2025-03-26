<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Bill Generator</title>
    <style>
        form {
            margin-bottom: 20px;
        }
        table {
            border-collapse: collapse;
            width: 100%;
        }
        th, td {
            border: 1px solid black;
            padding: 10px;
            text-align: center;
        }
    </style>
</head>
<body>

<form method="post">
    <label>Item Codes (comma-separated):</label> <br>
    <input type="text" name="codes" required><br><br>

    <label>Item Names (comma-separated):</label> <br>
    <input type="text" name="names" required><br><br>

    <label>Units Sold (comma-separated):</label> <br>
    <input type="text" name="units" required><br><br>

    <label>Rates (comma-separated):</label> <br>
    <input type="text" name="rates" required><br><br>

    <button type="submit" name="submit">Generate Bill</button>
</form>

<?php
if (isset($_POST['submit'])) {
    $codes = explode(",", $_POST['codes']);
    $names = explode(",", $_POST['names']);
    $units = explode(",", $_POST['units']);
    $rates = explode(",", $_POST['rates']);

    if (count($codes) == count($names) && count($names) == count($units) && count($units) == count($rates)) {
        echo "<table>
                <tr>
                    <th>Code</th>
                    <th>Name</th>
                    <th>Units</th>
                    <th>Rate</th>
                    <th>Total</th>
                </tr>";

        $grandTotal = 0;

        for ($i = 0; $i < count($codes); $i++) {
            $total = $units[$i] * $rates[$i];
            $grandTotal += $total;

            echo "<tr>
                    <td>{$codes[$i]}</td>
                    <td>{$names[$i]}</td>
                    <td>{$units[$i]}</td>
                    <td>{$rates[$i]}</td>
                    <td>{$total}</td>
                  </tr>";
        }

        echo "<tr>
                <td colspan='4'><strong>Grand Total</strong></td>
                <td><strong>{$grandTotal}</strong></td>
              </tr>";

        echo "</table>";
    } else {
        echo "<p style='color: red; font-weight: bold;'>⚠️ Please enter the same number of items in all fields!</p>";
    }
}
?>

</body>
</html>
