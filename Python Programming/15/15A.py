'''Write a python program to check if a string is a Palindrome or not. [10'''

string = input("Enter a string: ")

if string == string[::-1]:
    print("Palindrome")
else:
    print("Not a palindrome")
