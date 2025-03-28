'''Write a Python program to find the length of a string without using built-in function. [10 M]'''

string = input("Enter a string: ")

count = 0
for _ in string:
    count += 1

print("Length of the string:", count)
