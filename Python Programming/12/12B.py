'''Write a Python program to accept string and remove the characters which have odd
 index values of a given string using user defined function.'''

def remove_odd_index_chars(s):
    result = ""
    for i in range(len(s)):
        if i % 2 == 0:
            result += s[i]
    return result

string = input("Enter a string: ")
print("String after removing odd index characters:", remove_odd_index_chars(string))
