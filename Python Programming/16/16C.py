'''Write a Python program to check if a given key already exists in a dictionary. 
If key exists replace with another key/value pair.'''

dict1 = {'a': 1, 'b': 2, 'c': 3} 
print("Dictionary: ", dict1)

check_key = input("Enter key to check: ")

if check_key in dict1:
    new_key = input("Enter new key: ")
    new_value = int(input("Enter new value: "))

    # Remove the existing key and add the new key-value pair
    dict1.pop(check_key)
    dict1[new_key] = new_value

    print("Updated Dictionary:", dict1)
else:
    print("Key not found in dictionary.")
