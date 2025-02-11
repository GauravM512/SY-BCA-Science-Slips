def convert_case(string, to_uppercase=True):
    """
    Convert the case of a string to uppercase or lowercase based on user input.
    Default behavior is to convert to uppercase.
    """
    if to_uppercase:
        return string.upper()
    else:
        return string.lower()

# Input the string from the user
input_string = input("Enter a string: ")

# Input whether to convert to uppercase or lowercase
choice = input("Convert to uppercase (U) or lowercase (L)? (U/L): ").upper()

# Check the user's choice and convert the string accordingly
if choice == 'U':
    converted_string = convert_case(input_string, to_uppercase=True)
    print("String in uppercase:", converted_string)
elif choice == 'L':
    converted_string = convert_case(input_string, to_uppercase=False)
    print("String in lowercase:", converted_string)
else:
    print("Invalid choice. Please enter 'U' for uppercase or 'L' for lowercase.")
