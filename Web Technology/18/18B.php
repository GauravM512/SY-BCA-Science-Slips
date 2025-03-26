<?php
// Database credentials
$host = "localhost";
$dbname = "your_database_name";
$user = "your_username";
$pass = "your_password";

try {
    $conn = new PDO("pgsql:host=$host;dbname=$dbname", $user, $pass);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $stmt = $conn->query("SELECT * FROM Teacher");
    $teachers = $stmt->fetchAll(PDO::FETCH_ASSOC);

    echo json_encode($teachers);
} catch (PDOException $e) {
    echo "Error: " . $e->getMessage();
}
?>
