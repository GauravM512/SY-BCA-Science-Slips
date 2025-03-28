'''Write a Python program to match key values in two dictionaries. [20 M] 
Sample dictionary: {'key1': 1, 'key2': 3, 'key3': 2}, {'key1': 1, 'key2': 2}
Expected output: key1: 1 is present in both x and y'''


x = eval(input("Enter the first dictionary (e.g., {'key1': 1, 'key2': 3}): "))
y = eval(input("Enter the second dictionary (e.g., {'key1': 1, 'key2': 2}): "))

print("\nDictionary x:", x)
print("Dictionary y:", y)

print("\nMatching Key-Value Pairs:")
for key in x:
    if key in y and x[key] == y[key]:
        print(f"{key}: {x[key]} is present in both x and y")
