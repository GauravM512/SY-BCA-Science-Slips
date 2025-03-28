'''Write a Sequential search function which searches an item in a sorted list. 
The function should return the index of element to be searched in the list.'''

def sequential_search(lst, item):
    for i in range(len(lst)):
        if lst[i] == item:
            return i
    return -1

n = int(input("Enter number of elements: "))
slist = []

for _ in range(n):
    slist.append(int(input("Enter element: ")))

slist.sort()

item = int(input("Enter item to search: "))

index = sequential_search(slist, item)

if index != -1:
    print(f"Element found at index {index}")
else:
    print("Element not found")