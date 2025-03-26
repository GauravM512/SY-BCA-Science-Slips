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