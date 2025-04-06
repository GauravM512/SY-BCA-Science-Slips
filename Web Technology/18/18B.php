<?/*Write a AJAX program to print Teacher information from postgreSQL table Teacher.
Teacher (Tno, Name, Subject, Research area)*/?>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST['action']) && $_POST['action'] == 'get_teachers') {
    $db = pg_connect("host=localhost dbname=Teacher_DB user=postgres password=root") or die("Could not connect");

    $query = "SELECT * FROM Teacher";
    $result = pg_query($db, $query);

    if (pg_num_rows($result) > 0) {
        echo "<table border='1' cellpadding='10'>
                <tr>
                    <th>Teacher No</th>
                    <th>Name</th>
                    <th>Subject</th>
                    <th>Research Area</th>
                </tr>";
        while ($row = pg_fetch_assoc($result)) {
            echo "<tr>
                    <td>{$row['tno']}</td>
                    <td>{$row['name']}</td>
                    <td>{$row['subject']}</td>
                    <td>{$row['research_area']}</td>
                </tr>";
        }
        echo "</table>";
    } else {
        echo "No teachers found.";
    }
    pg_close($db);
    exit();
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>Teacher Info</title>
    <script>
        function loadTeachers() {
            var xhr = new XMLHttpRequest();
            xhr.open("POST", "teacher_info.php", true);
            xhr.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
            xhr.onreadystatechange = function() {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("result").innerHTML = this.responseText;
                }
            };
            xhr.send("action=get_teachers");
        }
    </script>
</head>
<body>
    <h2>Teacher Information</h2>
    <button onclick="loadTeachers()">Load Teachers</button>
    <br><br>
    <div id="result"></div>
</body>
</html>
