<?php
$xml = simplexml_load_file("subjects.xml") or die("Error: Cannot load XML file.");

echo "<h3>Subject Code for 'Web Technology Laboratory':</h3>";

$found = false;

foreach ($xml->subject as $subject) {
    $name = (string)$subject->name;
    $code = (string)$subject->code;

    if (trim($name) === "Web Technology Laboratory") {
        echo "Subject Code: $code";
        $found = true;
        break;
    }
}

if (!$found) {
    echo "Subject not found.";
}
?>
