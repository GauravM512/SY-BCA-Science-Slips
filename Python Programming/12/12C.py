'''Write a Python program to accept n numbers in list and remove duplicates from a list. [20 M]'''

n = int(input("Enter how many numbers: "))

nlist = []
for i in range(n):
    num = int(input(f"Enter number {i+1}: "))
    nlist.append(num)

# Removing duplicates manually
unique_list = []
for i in range(len(nlist)):
    is_duplicate = False
    for j in range(i):
        if nlist[i] == nlist[j]:
            is_duplicate = True
            break
    if not is_duplicate:
        unique_list.append(nlist[i])


print("\nList after removing duplicates:", unique_list)
