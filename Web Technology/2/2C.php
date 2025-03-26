<!DOCTYPE html>
<html lang="en">
<head>
    <title>Cylinder Area and Volume</title>
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
    interface Shape {
        const PI = 3.14159265359;
        public function area();
        public function volume();
    }

    class Cylinder implements Shape {
        private $radius, $height;
        public function __construct($radius, $height) {
            $this->radius = $radius;
            $this->height = $height;
        }
        public function area() {
            return 2 * self::PI * $this->radius * ($this->radius + $this->height);
        }
        public function volume() {
            return self::PI * pow($this->radius, 2) * $this->height;
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $radius = $_POST['radius'];
        $height = $_POST['height'];

        if ($radius > 0 && $height > 0) {
            $cylinder = new Cylinder($radius, $height);
            echo "<h3>Results:</h3>";
            echo "<p>Radius: $radius</p>";
            echo "<p>Height: $height</p>";
            echo "<p>Surface Area: " . $cylinder->area() . "</p>";
            echo "<p>Volume: " . $cylinder->volume() . "</p>";
        } else {
            echo "<p>Please enter positive values for radius and height.</p>";
        }
    }
    ?>
</body>
</html>
