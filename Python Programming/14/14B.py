'''Write a Python program which accept an integer value n and display all prime numbers till n.'''

n = int(input("Enter the value of n: "))

print("Prime numbers till", n, "are:")

for num in range(2, n + 1):
    is_prime = True
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            is_prime = False
            break
    if is_prime:
        print(num, end=" ")
