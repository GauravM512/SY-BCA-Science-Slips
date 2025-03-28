'''Write a Python program to find maximum and the minimum value in a set. [10]'''

set1 = set(map(int, input("Enter set elements separated by spaces: ").split()))

max_value = max(set1)
min_value = min(set1)

print("\nSet:", set1)
print("Maximum value:", max_value)
print("Minimum value:", min_value)
