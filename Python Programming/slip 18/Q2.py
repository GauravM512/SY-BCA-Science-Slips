def custom_set_statistics(input_set):
    # Initialize variables for length, maximum, minimum, and sum
    length = 0
    maximum = None
    minimum = None
    sum_values = 0

    # Iterate through each element in the set
    for element in input_set:
        # Update length
        length += 1

        # Update maximum value
        if maximum is None or element > maximum:
            maximum = element

        # Update minimum value
        if minimum is None or element < minimum:
            minimum = element

        # Update sum of values
        sum_values += element

    return length, maximum, minimum, sum_values

# Input the number of elements for the set
n = int(input("Enter the number of elements for the set: "))

# Input the elements for the set
input_set = set(float(input(f"Enter element {i+1}: ")) for i in range(n))

# Calculate set statistics
length, maximum, minimum, sum_values = custom_set_statistics(input_set)

# Print the statistics
print("Length of the set:", length)
print("Maximum value in the set:", maximum)
print("Minimum value in the set:", minimum)
print("Sum of values in the set:", sum_values)
