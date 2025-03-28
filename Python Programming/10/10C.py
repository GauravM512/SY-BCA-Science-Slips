'''Write a Python program to count frequency of each character in a given string using user defined function.'''

def count_frequency(string):
    freq = {}  # 
    for char in string:
        if char != " ":  
            if char in freq:
                freq[char] += 1
            else:
                freq[char] = 1
    return freq

string = input("Enter a string: ")

result = count_frequency(string)

print("\nCharacter frequencies:")
for char, count in result.items():
    print(f"'{char}': {count}")
