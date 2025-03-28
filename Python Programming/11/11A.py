'''Write a Python program to accept the strings which contains all vowels. [10]'''

string = input("Enter a string: ")

vowels = {'a', 'e', 'i', 'o', 'u'}

if vowels.issubset(set(string.lower())):
    print("The string contains all vowels.")
else:
    print("The string does not contain all vowels.")
