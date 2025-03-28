'''Write a Python program to calculate the average of numbers in a given list.'''

n = int(input("Enter the number of elements: "))
num_list = []

for i in range(n):
    num = float(input(f"Enter number {i + 1}: "))
    num_list.append(num)

average = sum(num_list) / len(num_list)

print("Average of the list:", average)
