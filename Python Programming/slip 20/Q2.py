import string

def remove_special_symbols(string):
    # Define the set of special symbols/punctuation
    special_symbols = set(string.punctuation)

    # Remove special symbols/punctuation from the string
    cleaned_string = ''.join(char for char in string if char not in special_symbols)

    return cleaned_string

# Test the function
input_string = "Hello! This is a test string, with some special symbols!!!"
cleaned_string = remove_special_symbols(input_string)
print("Original string:", input_string)
print("String after removing special symbols:", cleaned_string)
