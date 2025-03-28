'''Write a Python program to accept a string and from a given string where all occurrences
 of its first character have been changed to '$', except the first char itself.'''

string = input("Enter a string: ")
modified_string = string[0]

for char in string[1:]:
    if char == string[0]:
        modified_string += '$'
    else:
        modified_string += char

print("Modified String:", modified_string)
