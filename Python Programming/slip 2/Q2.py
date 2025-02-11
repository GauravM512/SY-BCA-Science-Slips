def combine_dicts(d1, d2):
    combined_dict = {}

    # Combine keys and values from both dictionaries
    for key in d1.keys():
        combined_dict[key] = d1.get(key, 0) + d2.get(key, 0)

    for key in d2.keys():
        if key not in d1:
            combined_dict[key] = d2[key]

    return combined_dict

# Sample dictionaries
d1 = {'a': 100, 'b': 200, 'c': 300}
d2 = {'a': 300, 'b': 200, 'd': 400}

# Combine dictionaries
combined = combine_dicts(d1, d2)
print(combined)
