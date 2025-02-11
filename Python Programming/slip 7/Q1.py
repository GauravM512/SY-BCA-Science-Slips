def find_max_min(s):
    # Check if the set is empty
    if not s:
        return "Set is empty"

    # Find maximum and minimum values
    max_value = max(s)
    min_value = min(s)

    return max_value, min_value

# Sample set
my_set = {5, 2, 8, 3, 1, 9}

# Find maximum and minimum values
max_value, min_value = find_max_min(my_set)
print("Maximum value:", max_value)
print("Minimum value:", min_value)
