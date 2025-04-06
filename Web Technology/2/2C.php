<?/*Write a PHP program to define Interface shape which has two method as area() and volume(). 
Define a constant PI. Create a class Cylinder implement this interface and calculate area and Volume.*/?>

<!DOCTYPE html>
<html>
<head>
    <title>Cylinder Calculator</title>
</head>
<body>
    <h2>Cylinder Area and Volume Calculator</h2>

    <form method="post">
        <label>Radius:</label>
        <input type="number" name="radius" step="0.01" required><br><br>

        <label>Height:</label>
        <input type="number" name="height" step="0.01" required><br><br>

        <input type="submit" value="Calculate">
    </form>

    <?php
    // Interface with constants and abstract methods
    interface Shape {
        const PI = 3.14;

        public function area();
        public function volume();
    }

    // Cylinder class implementing Shape
    class Cylinder implements Shape {
        private $r, $h;

        function __construct($r, $h) {
            $this->r = $r;
            $this->h = $h;
        }

        function area() {
            return 2 * self::PI * $this->r * ($this->r + $this->h);
        }

        function volume() {
            return self::PI * $this->r * $this->r * $this->h;
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $r = $_POST['radius'];
        $h = $_POST['height'];

        $cyl = new Cylinder($r, $h);

        echo "<h3>Results:</h3>";
        echo "Surface Area: " . $cyl->area() . "<br>";
        echo "Volume: " . $cyl->volume();
    }
    ?>
</body>
</html>
