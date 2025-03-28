'''Write a Python program to print average of all elements of sets.'''

numbers = set(map(float, input("Enter set elements separated by spaces: ").split()))


average = sum(numbers) / len(numbers) if numbers else 0

print("\nSet Elements:", numbers)
print("Average of Set Elements:", average)