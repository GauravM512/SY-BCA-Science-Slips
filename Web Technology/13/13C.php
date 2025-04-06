<?/*Write PHP script to generate an XML code in the following format
<?xml version=1.0”?>
<ABC College>
    <Computer Application Department>
        <Course> BCA(Science) </Course>
        <Student Strength > 80</Student Strength>
        <Number of Teachers>12</Number of Teachers>
    </Computer Application Department>
</ABC College>*/?>

<?php
$xml = new DOMDocument("1.0", "UTF-8");
$xml->formatOutput = true;

$root = $xml->createElement("ABC_College");
$xml->appendChild($root);

$dept = $xml->createElement("Computer_Application_Department");
$root->appendChild($dept);

$course = $xml->createElement("Course", "BCA(Science)");
$dept->appendChild($course);

$studentStrength = $xml->createElement("Student_Strength", "80");
$dept->appendChild($studentStrength);

$numTeachers = $xml->createElement("Number_of_Teachers", "12");
$dept->appendChild($numTeachers);

$fileName = "college.xml";
$xml->save($fileName);

echo "XML file generated successfully: <a href='$fileName'>$fileName</a>";
?>
