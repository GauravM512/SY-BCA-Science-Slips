'''Write a Python program to display occurrence of the elements in the tuple, which appears more than 2 times.'''


tuple1 = tuple(map(int, input("Enter tuple elements separated by spaces: ").split()))

occurrences = {}

# Counting the occurrences of each element
for num in tuple1:
    if num in occurrences:
        occurrences[num] += 1
    else:
        occurrences[num] = 1

# Extracting elements that appear more than 2 times
repeated_items = {key: value for key, value in occurrences.items() if value > 2}

print("\nTuple:", tuple1)
print("Elements occurring more than 2 times (element: occurrence):", repeated_items)
