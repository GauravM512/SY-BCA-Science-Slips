<?/*Write a script to create XML file named “Teacher.xml”.
<Department>
    <Computer Science>
        <Teacher Name>…</Teacher Name>
        <Qualification>….</Qualification>
        <Subject Taught>…</Subject Taught>
        <Experience>…</Experience>
    </Computer Science>
</Department>
Store the details of 5 teachers who are having qualification as NET*/?>

<?php
$teachers = [
    ["name" => "Rajesh Kumar", "qual" => "NET", "subject" => "Data Structures", "exp" => "10 years"],
    ["name" => "Priya Sharma", "qual" => "NET", "subject" => "Database Management", "exp" => "8 years"],
    ["name" => "Anjali Mehta", "qual" => "NET", "subject" => "Operating Systems", "exp" => "7 years"],
    ["name" => "Vikas Patil", "qual" => "NET", "subject" => "Computer Networks", "exp" => "6 years"],
    ["name" => "Neha Joshi", "qual" => "NET", "subject" => "Software Engineering", "exp" => "9 years"]
];

$doc = new DOMDocument('1.0', 'UTF-8');
$doc->formatOutput = true;

$dept = $doc->createElement('Department');
$doc->appendChild($dept);

$cs = $doc->createElement('Computer_Science');
$dept->appendChild($cs);

foreach ($teachers as $t) {
    $teacher = $doc->createElement('Teacher');

    $name = $doc->createElement('Name', $t['name']);
    $teacher->appendChild($name);

    $qual = $doc->createElement('Qualification', $t['qual']);
    $teacher->appendChild($qual);

    $subject = $doc->createElement('Subject_Taught', $t['subject']);
    $teacher->appendChild($subject);

    $exp = $doc->createElement('Experience', $t['exp']);
    $teacher->appendChild($exp);

    $cs->appendChild($teacher);
}

$file = 'Teacher.xml';
$doc->save($file);

echo "XML file created successfully: $file";
?>
