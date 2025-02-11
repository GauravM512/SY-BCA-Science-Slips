def reverse_number(number):
    # Convert the number to a string and reverse it
    reversed_str = str(number)[::-1]
    
    # Convert the reversed string back to an integer
    reversed_number = int(reversed_str)
    
    return reversed_number

# Test the function
number = 12345
reversed_number = reverse_number(number)
print("Original number:", number)
print("Reversed number:", reversed_number)
