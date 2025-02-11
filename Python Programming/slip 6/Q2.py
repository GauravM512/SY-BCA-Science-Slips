def count_occurrences(t):
    # Dictionary to store occurrences of elements
    occurrence_dict = {}
    
    # Count occurrences of each element
    for item in t:
        if item in occurrence_dict:
            occurrence_dict[item] += 1
        else:
            occurrence_dict[item] = 1
    
    # Display elements occurring more than twice
    for item, count in occurrence_dict.items():
        if count > 2:
            print(f"'{item}' occurs {count} times")

# Sample tuple
my_tuple = (1, 2, 3, 1, 2, 4, 5, 2, 2, 5, 6, 6, 6)

# Display occurrences of elements more than twice
count_occurrences(my_tuple)
