#Write a Python program to find the repeated items of a tuple.

tuple1 = (1, 2, 3, 4, 5, 2, 3, 6, 7, 3, 8, 1, 9, 10, 2)

occurrences = {}

for num in tuple1:
    if num in occurrences:
        occurrences[num] += 1
    else:
        occurrences[num] = 1

# Extracting repeated items with their occurrences
repeated_items = {key: value for key, value in occurrences.items() if value > 1}

print("Repeated items in the tuple (item: occurrence count):", repeated_items)
