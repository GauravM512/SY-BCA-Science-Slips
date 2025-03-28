'''Write a Python function to multiply all the numbers in a list. [20 M] 
Sample-List: (8, 2, 3, -1, 7)
Expected Output: -336'''

def multiply_list(numbers):
    result = 1
    for num in numbers:
        result *= num
    return result

numbers = list(map(int, input("Enter list elements separated by spaces: ").split()))

print("\nList Elements:", numbers)
print("Product of all elements:", multiply_list(numbers))
