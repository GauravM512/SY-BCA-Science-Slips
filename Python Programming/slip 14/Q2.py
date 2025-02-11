def is_prime(num):
    # Prime numbers are greater than 1
    if num <= 1:
        return False
    
    # Check for factors from 2 to the square root of num
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    
    return True

def display_prime_numbers(n):
    prime_numbers = []
    for num in range(2, n+1):
        if is_prime(num):
            prime_numbers.append(num)
    
    return prime_numbers

# Input the value of 'n'
n = int(input("Enter an integer value 'n': "))

# Display all prime numbers till 'n'
prime_numbers = display_prime_numbers(n)
print("Prime numbers till", n, "are:", prime_numbers)
