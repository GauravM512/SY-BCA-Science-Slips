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
