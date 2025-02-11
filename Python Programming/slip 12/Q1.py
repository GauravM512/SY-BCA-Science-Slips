def find_length_of_string(string):
    # Initialize a variable to count the characters
    length = 0
    
    # Iterate through each character in the string
    for char in string:
        # Increment the length variable for each character
        length += 1
    
    return length

# Test the function
input_string = "Hello, world!"
length = find_length_of_string(input_string)
print("Length of the string:", length)
