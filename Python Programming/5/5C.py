'''Write a Python program to create a dictionary from two lists without losing duplicate values.
Sample lists: ['Class-V', 'Class-VI', 'Class-VII', 'Class-VIII'], [1, 2, 2, 3]
Expected Output: defaultdict(<class 'set'>, {'Class-VII': {2}, 'Class-VI': {2}, 'Class-VIII':
{3}, 'Class-V': {1}})'''

from collections import defaultdict

keys = input("Enter keys separated by spaces: ").split()
values = list(map(int, input("Enter values separated by spaces: ").split()))

# Creating defaultdict with set to hold duplicate values
result = defaultdict(set)

for key, value in zip(keys, values):
    result[key].add(value)

print("\nDictionary with duplicate values preserved:")
print(result)
