# Define two sets
set1 = {1, 2, 3, 4, 5}
set2 = {4, 5, 6, 7, 8}

# Print the set difference (elements in set1 but not in set2)
set_difference = set1 - set2
print("Set difference (elements in set1 but not in set2):", set_difference)

# Print the symmetric difference (elements that are in either set1 or set2 but not in both)
symmetric_difference = set1 ^ set2
print("Symmetric difference (elements in either set1 or set2 but not in both):", symmetric_difference)
