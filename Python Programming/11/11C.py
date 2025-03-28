'''Write a Python program to accept n numbers in list. 
Find average of list and sort it in descending order. [20M]'''

n = int(input("Enter how many numbers: "))

num_list = []
for i in range(n):
    num = int(input(f"Enter number {i + 1}: "))
    num_list.append(num)

average = sum(num_list) / n

num_list.sort(reverse=True)

print("\nAverage of list:", average)
print("Sorted list (descending order):", num_list)
