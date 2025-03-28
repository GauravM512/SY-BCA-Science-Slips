'''Write a Python program to print a dictionary where the keys are numbers
between 1 and 15 (both included) and the values are square of keys.
Sample Dictionary: {10: 100, 20: 400, 30: 900, 40: 1600, 50: 2500}'''

result_dict = {}

n = int(input("Enter num to check: "))

for num in range(1, n+1):
    result_dict[num] = num ** 2

print(result_dict)
