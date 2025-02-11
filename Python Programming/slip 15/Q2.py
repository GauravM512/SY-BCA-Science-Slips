def sequential_search_sorted(arr, target):
    """
    Sequential search for a target item in a sorted list.
    Returns the index of the target item if found, otherwise returns -1.
    """
    for i, item in enumerate(arr):
        if item == target:
            return i
        elif item > target:
            # Since the list is sorted, if we encounter an item larger than the target,
            # it means the target item is not in the list, so we can stop searching.
            break
    # Target item not found
    return -1

# Example usage:
sorted_list = [1, 3, 5, 7, 9, 11, 13, 15]
target = 7
index = sequential_search_sorted(sorted_list, target)
if index != -1:
    print(f"The target item {target} is found at index {index}.")
else:
    print(f"The target item {target} is not found in the list.")
