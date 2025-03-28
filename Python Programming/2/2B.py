'''Write a Python program to combine two dictionary adding values for common keys. 
d1 = {'a': 100, 'b': 200, 'c':300} 
d2 = {'a': 300, 'b': 200,'d':400}
Sample output: ({'a': 400, 'b': 400,'d': 400, 'c': 300})'''


d1 = eval(input("Enter the first dictionary (e.g., {'a': 100, 'b': 200}): "))
d2 = eval(input("Enter the second dictionary (e.g., {'a': 300, 'c': 400}): "))


result = d1.copy()

for key, value in d2.items():
    if key in result:
        result[key] += value  # Add values for common keys
    else:
        result[key] = value   # Add new key-value pairs

print("Combined Dictionary:", result)
