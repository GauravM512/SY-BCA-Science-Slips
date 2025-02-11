def calculate_average(s):
    # Check if the set is empty
    if not s:
        return "Set is empty"

    # Calculate the sum of all elements
    sum_elements = sum(s)

    # Calculate the average
    average = sum_elements / len(s)

    return average

# Sample set
my_set = {5, 10, 15, 20}

# Calculate the average of elements in the set
average = calculate_average(my_set)
print("Average of all elements in the set:", average)
