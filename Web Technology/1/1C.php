<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Associative Array Operations</title>
</head>
<body>

<form method="post">
    <label>Array 1 (key:value pairs):</label>
    <input type="text" name="array1" required placeholder="a:1, b:2"><br><br>

    <label>Array 2 (key:value pairs):</label>
    <input type="text" name="array2" required placeholder="b:2, c:3"><br><br>

    <label>Operation:</label>
    <select name="operation" required>
        <option value="merge">Merge</option>
        <option value="intersect">Intersection</option>
        <option value="union">Union</option>
        <option value="difference">Difference</option>
    </select><br><br>

    <input type="submit" value="Submit">
</form>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    function toAssocArray($input) {
        $arr = [];
        foreach (explode(',', $input) as $pair) {
            [$k, $v] = array_map('trim', explode(':', $pair));
            $arr[$k] = $v;
        }
        return $arr;
    }

    $array1 = toAssocArray($_POST["array1"]);
    $array2 = toAssocArray($_POST["array2"]);
    $operation = $_POST["operation"];

    $result = match ($operation) {
        "merge"      => array_merge($array1, $array2),
        "intersect"  => array_intersect_assoc($array1, $array2),
        "union"      => $array1 + $array2,
        "difference" => array_diff_assoc($array1, $array2),
    };

    echo "<h3>Result:</h3>";
    print_r($result);
}
?>
</body>
</html>
