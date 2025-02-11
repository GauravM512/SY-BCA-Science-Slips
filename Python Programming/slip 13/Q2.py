def change_occurrences(string):
    # Get the first character of the string
    first_char = string[0]

    # Replace all occurrences of the first character (except the first occurrence) with '$'
    modified_string = first_char + string[1:].replace(first_char, '$')

    return modified_string

# Input the string
input_string = input("Enter a string: ")

# Modify the string as per the requirement
modified_string = change_occurrences(input_string)

# Print the modified string
print("Modified string:", modified_string)
