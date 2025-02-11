def match_key_values(dict1, dict2):
    # Iterate through the keys and values of the first dictionary
    for key, value in dict1.items():
        # Check if the key and value are present in the second dictionary
        if key in dict2 and dict2[key] == value:
            print(f"{key}: {value} is present in both x and y")

# Sample dictionaries
dict1 = {'key1': 1, 'key2': 3, 'key3': 2}
dict2 = {'key1': 1, 'key2': 2}

# Call the function to match key values
match_key_values(dict1, dict2)
