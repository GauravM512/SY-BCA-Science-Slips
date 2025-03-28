'''Write a Python program to remove special symbols/Punctuation from a given string. [20 M]'''

def remove_punctuation(string):
    result = ""
    for char in string:
        if char.isalnum() or char.isspace():  
            result += char
    return result


string = input("Enter a string: ")
cleaned_string = remove_punctuation(string)

print("String without special symbols/punctuation:", cleaned_string)
