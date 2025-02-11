def is_palindrome(string):
    # Convert the string to lowercase and remove spaces
    string = string.lower().replace(" ", "")
    
    # Compare the string with its reverse
    return string == string[::-1]

# Input the string to check
input_string = input("Enter a string: ")

# Check if the string is a palindrome
if is_palindrome(input_string):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
