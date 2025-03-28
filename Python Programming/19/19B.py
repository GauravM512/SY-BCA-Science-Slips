'''Write a Python function to get a string made of the first 2 and the last 2 chars from a given string.
 If the string length is less than 2, it return empty string.

Sample String: 'General12'      Expected Result: 'Ge12' 
Sample String: 'Ka'             Expected Result: 'KaKa'
Sample String: ' K'             Expected Result: Empty String'''

def first_last_2_chars(s):
    if len(s) < 2:
        return ""
    else:
        return s[:2] + s[-2:]


string = input("Enter a string: ")
if string == "":
    print("Empty String")
else:   
    print("String:", string)

result = first_last_2_chars(string)
print("Result:", result)
