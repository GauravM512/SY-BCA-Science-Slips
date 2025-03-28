'''Write a Python program to count frequency of each character in a given string using user defined function.'''

def count_frequency(string):
    freq_dict = {}
    
    for char in string:
        if char in freq_dict:
            freq_dict[char] += 1
        else:
            freq_dict[char] = 1
    
    return freq_dict

string = input("Enter a string: ")
print("Character Frequency:", count_frequency(string))
