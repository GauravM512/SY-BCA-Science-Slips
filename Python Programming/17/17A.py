'''Write a Python program to accept and convert string in uppercase or vice versa.'''

string = input("Enter a string: ")
choice = input("Enter 'u' to convert to UPPERCASE or 'l' to convert to lowercase: ")

if choice == 'u':
    print("Uppercase:", string.upper())
elif choice == 'l':
    print("Lowercase:", string.lower())
else:
    print("Invalid choice! Please enter 'u' or 'l'.")
