<?/*Write PHP script to demonstrate the concept of introspection for examining object.*/?>

<!DOCTYPE html>
<html>
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

echo "<strong>Class Name:</strong> " . get_class($object) . "<br><br>";

foreach (get_object_vars($object) as $property => $value) {
    echo "$property: $value<br>";
}

foreach (get_class_methods($object) as $method) {
    echo "$method<br>";
}
?>

</body>
</html>
