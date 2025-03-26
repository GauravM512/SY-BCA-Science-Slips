<?php
$file = 'sample.txt';

if (file_exists($file)) {
    echo file_get_contents($file);
} else {
    echo "File not found!";
}
?>
