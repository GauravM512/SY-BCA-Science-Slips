<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>PHP Object Introspection</title>
</head>
<body>
    <h2>PHP Object Introspection</h2>

<?php
class MyClass {
    public $property1 = 'value1';
    public $property2 = 'value2';

    public function method1() {
        echo "Method 1 called.<br>";
    }

    public function method2() {
        echo "Method 2 called.<br>";
    }
}

$object = new MyClass();

$className = get_class($object);
echo "<strong>Class Name:</strong> $className<br><br>";

$properties = get_object_vars($object);
echo "<strong>Properties:</strong><br>";
foreach ($properties as $property => $value) {
    echo "$property: $value<br>";
}

$methods = get_class_methods($className);
echo "<br><strong>Methods:</strong><br>";
foreach ($methods as $method) {
    echo "$method<br>";
}
?>

</body>
</html>
