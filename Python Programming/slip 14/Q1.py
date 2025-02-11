def tuple_stats(numbers):
    # Calculate maximum, minimum, and sum of elements in the tuple
    max_num = max(numbers)
    min_num = min(numbers)
    sum_nums = sum(numbers)
    
    return max_num, min_num, sum_nums

# Input the number of elements for the tuple
n = int(input("Enter the number of elements for the tuple: "))

# Input the elements for the tuple
numbers = tuple(float(input(f"Enter element {i+1}: ")) for i in range(n))

# Calculate maximum, minimum, and sum of elements in the tuple
max_num, min_num, sum_nums = tuple_stats(numbers)

# Print the results
print("Maximum:", max_num)
print("Minimum:", min_num)
print("Sum:", sum_nums)
