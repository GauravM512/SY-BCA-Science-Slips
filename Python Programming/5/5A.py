"Write a Python program to sort the tuple T=(4,2,6.8,1.8,10) ."

T = tuple(map(float, input("Enter tuple elements separated by spaces: ").split()))

lst = list(T)

n = len(lst)
for i in range(n):
    for j in range(0, n - i - 1):
        if lst[j] > lst[j + 1]:
            lst[j], lst[j + 1] = lst[j + 1], lst[j]

sorted_tuple = tuple(lst)

print("\nOriginal tuple:", T)
print("Sorted tuple:", sorted_tuple)


T = (4, 2, 6.8, 1.8, 10)
sorted_T = tuple(sorted(T))
print("Sorted tuple:", sorted_T)