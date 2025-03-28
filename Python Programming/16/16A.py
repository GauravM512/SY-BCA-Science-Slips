'''Write a Python program to create tuple of n numbers, 
print the first half values of tuple in one line and the last half values of tuple on next line.'''

n = int(input("Enter the number of elements: ")) 
values = []

for i in range(n):
    num = int(input(f"Enter number {i+1}: ")) 
    values.append(num)

values = tuple(values)
mid = len(values) // 2

print("First half:", values[:mid])
print("Second half:", values[mid:])