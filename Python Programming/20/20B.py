'''Write a Python program which finds sum of digits of a number. [20 M]
 Example n=130 then output is 4 (1+3+0).'''

n = int(input("Enter a number: "))
sum_digits = 0
while n > 0:
    sum_digits += n % 10
    n //= 10
print("Sum of digits:", sum_digits)
