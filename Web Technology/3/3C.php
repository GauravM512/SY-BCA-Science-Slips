<!DOCTYPE html>
<html lang="en">
<head>
    <title>Shape Area Calculator</title>
</head>
<body>

<form method="post">
    <label><input type="radio" name="shape" value="triangle" required> Triangle</label>
    <label><input type="radio" name="shape" value="square"> Square</label>
    <label><input type="radio" name="shape" value="rectangle"> Rectangle</label>
    <label><input type="radio" name="shape" value="circle"> Circle</label><br><br>

    <label>Dimension 1:</label>
    <input type="number" name="dim1" required>
    <label>Dimension 2 (optional):</label>
    <input type="number" name="dim2"><br><br>

    <button type="submit" name="submit">Calculate</button>
</form>

<?php
class Shape {
    protected $d1, $d2;
    public function __construct($d1, $d2 = 0) {
        $this->d1 = $d1;
        $this->d2 = $d2;
    }
    public function area() { return 0; }
}

class Triangle extends Shape {
    public function area() { return 0.5 * $this->d1 * $this->d2; }
}

class Square extends Shape {
    public function area() { return $this->d1 ** 2; }
}

class Rectangle extends Shape {
    public function area() { return $this->d1 * $this->d2; }
}

class Circle extends Shape {
    public function area() { return pi() * $this->d1 ** 2; }
}

if (isset($_POST['submit'])) {
    $shape = $_POST['shape'];
    $d1 = $_POST['dim1'];
    $d2 = $_POST['dim2'] ?? 0;

    $obj = match ($shape) {
        'triangle' => new Triangle($d1, $d2),
        'square' => new Square($d1),
        'rectangle' => new Rectangle($d1, $d2),
        'circle' => new Circle($d1),
    };

    echo "<p>Area of $shape: " . $obj->area() . "</p>";
}
?>
</body>
</html>
