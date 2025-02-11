def create_dictionary_from_string(string):
    # Initialize an empty dictionary
    char_count = {}

    # Iterate through each character in the string
    for char in string:
        # Update the count of the character in the dictionary
        char_count[char] = char_count.get(char, 0) + 1

    return char_count

# Sample string
sample_string = 'Hello all'

# Create a dictionary from the string
result_dict = create_dictionary_from_string(sample_string)

# Print the dictionary
print("Dictionary from the string:", result_dict)
