'''Write a program which prints Fibonacci series of a number.'''

n = int(input("Enter the number of terms: "))
a, b = 0, 1
print("\nFibonacci Series:", end=" ")

for _ in range(n):
    print(a, end=" ")
    a, b = b, a + b
