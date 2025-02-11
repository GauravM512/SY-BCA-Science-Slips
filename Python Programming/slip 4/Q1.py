def find_repeated_items(t):
    count_dict = {}
    repeated_items = []

    # Count the occurrences of each item in the tuple
    for item in t:
        if item in count_dict:
            count_dict[item] += 1
        else:
            count_dict[item] = 1

    # Find repeated items
    for item, count in count_dict.items():
        if count > 1:
            repeated_items.append(item)

    return repeated_items

# Sample tuple
my_tuple = (1, 2, 2, 3, 4, 4, 5, 5, 5)

# Find repeated items
repeated = find_repeated_items(my_tuple)
print("Repeated items:", repeated)
