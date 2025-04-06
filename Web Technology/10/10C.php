<?/*Write a PHP script to following xml file.
<cricket>
    <player> abe</player>
    <rums>100</runs>
    <wickets>20</wickets>
</cricket>
Store data for 5 players and display data of players who have scored more than 100 runs.*/?>

<?php
$xml = simplexml_load_file("players.xml") or die("Error: Cannot load XML file.");

echo "<h3>Players with more than 100 runs:</h3>";

foreach ($xml->player as $player) {
    $name = $player->name;
    $runs = (int)$player->runs;

    if ($runs > 100) {
        echo "Player: $name <br>";
        echo "Runs: $runs <br><br>";
    }
}
?>