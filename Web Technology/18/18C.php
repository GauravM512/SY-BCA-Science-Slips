<?/*Property (pno, description, area)
a. Owner (oname, address, phone)
b. An owner can have one or more properties, but a property belongs to exactly one owner.
c. Accept owner name from the user. Write a PHP script which will display all properties which are own by that owner.*/?>

<?php

$db = pg_connect("host=localhost dbname=property_db user=postgres password=root") or die("Could not connect to database");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $owner_name = $_POST['owner_name'];
    
    $sql = "SELECT p.pno, p.description, p.area 
            FROM Property p
            WHERE p.owner_name = '$owner_name'";
    
    $result = pg_query($db, $sql) or die("Cannot execute query");

    if (pg_num_rows($result) > 0) {
        echo "<h3>Properties Owned by $owner_name:</h3>";
        echo "<table border='1'>
                <tr>
                    <th>Property Number</th>
                    <th>Description</th>
                    <th>Area</th>
                </tr>";
        
        while ($row = pg_fetch_assoc($result)) {
            echo "<tr>
                    <td>{$row['pno']}</td>
                    <td>{$row['description']}</td>
                    <td>{$row['area']}</td>
                  </tr>";
        }
        echo "</table>";
    } else {
        echo "No properties found for owner: $owner_name.";
    }
}

pg_close($db);

?>

<!DOCTYPE html>
<html>
<head>
    <title>Search Properties by Owner</title>
</head>
<body>
    <h3>Enter Owner's Name to Find Properties:</h3><br>
    <form method="post">
        Owner's Name: <input type="text" name="owner_name" required>
        <button type="submit">Search</button>
    </form>
</body>
</html>
