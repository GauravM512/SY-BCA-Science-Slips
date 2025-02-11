def fibonacci_series(n):
    # Initialize the first two terms of the Fibonacci series
    fib_series = [0, 1]

    # Calculate the Fibonacci series up to the nth term
    for i in range(2, n):
        next_term = fib_series[-1] + fib_series[-2]
        fib_series.append(next_term)

    return fib_series

# Input the number to generate Fibonacci series
num = int(input("Enter the number of terms for Fibonacci series: "))

# Print the Fibonacci series
print("Fibonacci series:")
print(*fibonacci_series(num))
