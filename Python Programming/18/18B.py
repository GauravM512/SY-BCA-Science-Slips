'''Write a Python program to accept n elements in a set and find the length of a set, maximum, minimum value and the sum of values in a set. 
(Don’t use built-in function)'''


n = int(input("Enter the number of elements: "))

num_set = set()
for i in range(n):
    num = int(input(f"Enter number {i+1}: "))
    num_set.add(num)

num_list = list(num_set)

length = 0
for _ in num_set:
    length += 1

max_val = min_val = num_list[0]
sum_val = 0

for num in num_list:
    if num > max_val:
        max_val = num
    if num < min_val:
        min_val = num
    sum_val += num

print("\nSet:", num_set)
print("Length of the set:", length)
print("Maximum value:", max_val)
print("Minimum value:", min_val)
print("Sum of values:", sum_val)
