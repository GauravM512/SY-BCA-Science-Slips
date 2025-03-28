'''Write a Python program to sort (ascending and descending) a dictionary by value. [20 M]'''

n = int(input("Enter the number of key-value pairs: "))
data = {}

for _ in range(n):
    key = input("Enter key: ")
    value = int(input("Enter value: "))
    data[key] = value

# Sorting dictionary
ascending = dict(sorted(data.items(), key=lambda x: x[1]))
descending = dict(sorted(data.items(), key=lambda x: x[1], reverse=True))

print("\nOriginal Dictionary:", data)
print("Ascending Order:", ascending)
print("Descending Order:", descending)
