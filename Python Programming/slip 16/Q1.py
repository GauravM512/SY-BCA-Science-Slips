def print_half_values(tuple_values):
    # Calculate the index to split the tuple into halves
    split_index = len(tuple_values) // 2

    # Print the first half of the tuple's values
    print("First half values:")
    print(*tuple_values[:split_index], sep=" ")

    # Print the last half of the tuple's values
    print("Last half values:")
    print(*tuple_values[split_index:], sep=" ")

# Input the number of values for the tuple
n = int(input("Enter the number of values for the tuple: "))

# Input the values for the tuple
tuple_values = tuple(float(input(f"Enter value {i+1}: ")) for i in range(n))

# Print the first half and last half of the tuple's values
print_half_values(tuple_values)
