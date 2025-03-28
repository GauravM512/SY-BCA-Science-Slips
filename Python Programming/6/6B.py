'''Write a Python program to create and display all combinations of letters, 
selecting each letter from a different key in a dictionary. [20 M]
Sample data: {'1':['a','b'], 2':['c','d']} 
Expected Output:
ac ad bc bd'''

# Dictionary with letter combinations
data = {'1': ['a', 'b'], '2': ['c', 'd']}

result = ['']

# Generate all combinations
for key in data:
    temp = []
    for x in result:
        for y in data[key]:
            temp.append(x + y)
    result = temp

print("Dictionary:", data)
print("\nCombinations:")
for x in result:
    print(x)
