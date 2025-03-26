<?php
    $url = "https://example.com";

    $sourceCode = file_get_contents($url);

    if ($sourceCode !== false) {
        echo "<pre>" . htmlspecialchars($sourceCode) . "</pre>";
    } else {
        echo "Failed to retrieve source code from $url";
    }
?>
