'''Write a Python program which prints fibonacci series of a number. [20]'''

n = int(input("Enter the number of terms: "))
a, b = 0, 1
print("\nFibonacci Series:", end=" ")

for _ in range(n):
    print(a, end=" ")
    a, b = b, a + b
