'''Write a Python program to create a dictionary from a string.
Sample String: ’Hello all’
Expected output: {'e': 1, 'o': 1, 'a': 1, 'l': 4, 'H': 1}'''

string = input("Enter a string: ")

char_count = {}

for char in string:
    if char != " ": 
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1

print("Character occurrences:", char_count)
