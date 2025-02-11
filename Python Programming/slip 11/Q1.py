def contains_all_vowels(string):
    # Define a set of vowels
    vowels = {'a', 'e', 'i', 'o', 'u'}

    # Convert the string to lowercase and remove spaces
    string = string.lower().replace(" ", "")

    # Check if all vowels are present in the string
    return all(vowel in string for vowel in vowels)

# Test the function
test_strings = ["Hello world", "AeIoU", "The quick brown fox jumps over the lazy dog"]

for string in test_strings:
    if contains_all_vowels(string):
        print(f"'{string}' contains all vowels.")
    else:
        print(f"'{string}' does not contain all vowels.")
