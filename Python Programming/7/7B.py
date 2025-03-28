'''Write a Python script to generate and print a dictionary that contains a number (between 1 to n) in the form (x, x*x).
Sample Dictionary (n = 5): 
Expected Output: {1: 1, 2: 4, 3: 9, 4: 16, 5: 25}'''

n = int(input("Enter number: "))  

square_dict = {}  

for x in range(1, n + 1):  
    square_dict[x] = x * x  

print("\nDictionary with squares:")
print(square_dict)