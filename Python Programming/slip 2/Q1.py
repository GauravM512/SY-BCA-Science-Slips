def get_4th_elements(t):
    # Check if the tuple has at least 4 elements
    if len(t) >= 4:
        # Get the 4th element from the front
        fourth_front = t[3]
        # Get the 4th element from the end
        fourth_end = t[-4]
        return fourth_front, fourth_end
    else:
        return "Tuple does not have enough elements"

# Example tuple
my_tuple = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)

# Get the 4th elements
result = get_4th_elements(my_tuple)
print("4th element from front:", result[0])
print("4th element from end:", result[1])
