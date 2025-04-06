<?/*Write a PHP script to accept following XML file
<subject>
    <subject code>BCA 245</subject code>
    <subject name> Web Technology Laboratory </subject name>
</subject>
Store data of 5 subjects as display subject code of Web Technology Laboratory.*/?>

<?php
$xml = simplexml_load_file("11C_subjects.xml") or die("Error: Cannot load XML file.");

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
