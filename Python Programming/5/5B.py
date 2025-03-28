'''Write a function to calculate the sum of numbers from 0 to n.'''
def sum_numbers(n):
    total = 0
    for i in range(n + 1):
        total += i
    return total


num = int(input("Enter a number: "))

result = sum_numbers(num)
print(f"The sum of numbers from 0 to {num} is: {result}")
