# Sample dictionary
my_dict = {'key1': 3, 'key2': 1, 'key3': 2, 'key4': 5, 'key5': 4}

# Sort the dictionary by value in ascending order
sorted_dict_asc = dict(sorted(my_dict.items(), key=lambda item: item[1]))

print("Dictionary sorted by value in ascending order:")
for key, value in sorted_dict_asc.items():
    print(f"{key}: {value}")

# Sort the dictionary by value in descending order
sorted_dict_desc = dict(sorted(my_dict.items(), key=lambda item: item[1], reverse=True))

print("\nDictionary sorted by value in descending order:")
for key, value in sorted_dict_desc.items():
    print(f"{key}: {value}")
