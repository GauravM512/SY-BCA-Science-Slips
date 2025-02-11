def remove_duplicates(numbers):
    # Convert the list to a set to remove duplicates
    unique_numbers = set(numbers)
    
    # Convert the set back to a list
    unique_list = list(unique_numbers)
    
    return unique_list

# Accept n numbers from the user
n = int(input("Enter the number of elements: "))
numbers = []
for i in range(n):
    num = int(input("Enter number {}: ".format(i+1)))
    numbers.append(num)

# Remove duplicates from the list
unique_numbers = remove_duplicates(numbers)

# Print the list without duplicates
print("List after removing duplicates:", unique_numbers)
