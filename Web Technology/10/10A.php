<?php

$file = "sample.html";
$sourceCode = file_get_contents($file);
echo "<h3>Source Code of '$file':</h3>";
echo "<pre>" . htmlspecialchars($sourceCode) . "</pre>";

?>
