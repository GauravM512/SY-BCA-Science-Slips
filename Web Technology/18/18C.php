<?php
include '18C_config.php';

if (isset($_GET['owner'])) {
    $owner = $_GET['owner'];

    try {
        // Connect to PostgreSQL
        $conn = new PDO("pgsql:host=" . DB_HOST . ";dbname=" . DB_NAME, DB_USER, DB_PASS);
        $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

        // Fetch properties for the specified owner
        $sql = "SELECT p.pno, p.description, p.area 
                FROM Property p
                JOIN Owner o ON p.owner_name = o.oname
                WHERE o.oname = :owner";

        $stmt = $conn->prepare($sql);
        $stmt->bindParam(':owner', $owner);
        $stmt->execute();

        $properties = $stmt->fetchAll(PDO::FETCH_ASSOC);

        echo "<h2>Properties owned by $owner:</h2>";
        if ($properties) {
            echo "<ul>";
            foreach ($properties as $property) {
                echo "<li>Pno: {$property['pno']}, Description: {$property['description']}, Area: {$property['area']}</li>";
            }
            echo "</ul>";
        } else {
            echo "<p>No properties found for $owner.</p>";
        }

    } catch (PDOException $e) {
        echo "Error: " . $e->getMessage();
    }
}
?>
