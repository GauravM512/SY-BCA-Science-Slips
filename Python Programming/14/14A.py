'''Write a Python program to create a tuple of n numbers and print maximum, minimum, and sum of elements in a tuple.'''

n = int(input("Enter the number of elements: "))

num_tuple = tuple(int(input(f"Enter number {i + 1}: ")) for i in range(n))

print("Tuple:", num_tuple)
print("Maximum:", max(num_tuple))
print("Minimum:", min(num_tuple))
print("Sum:", sum(num_tuple))
