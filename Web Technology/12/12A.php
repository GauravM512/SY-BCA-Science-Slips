<?//Write a PHP script to display student information on web page. ?>

<!DOCTYPE html>
<html>
<head>
    <title>Student Information</title>
</head>
<body>
    <h3>Student Information</h3>
    <?php
    $student = [
        "Name" => "Sanchet Koleakr",
        "Age" => 22,
        "Course" => "BCA Science"
    ];

    foreach ($student as $key => $value) {
        echo "<p><strong>$key:</strong> $value</p>";
    }
    ?>
</body>
</html>
