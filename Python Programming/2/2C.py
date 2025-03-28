'''Write a Python program to perform given operations on set. [20 M]
a. check whether 2 sets are equal or not
b. Symmetric difference
c. Intersection of sets
d. Find maximum and the minimum value in a set.'''

set1 = set(map(int, input("Enter elements of set1 separated by spaces: ").split()))
set2 = set(map(int, input("Enter elements of set2 separated by spaces: ").split()))

print("Set a:", set1)
print("Set b:", set2)

if set1 == set2:
    print("\nSet 1 and Set 2 are equal")
else:
    print("\nSet 1 and Set 2 are not equal")

print("Set Symmetric Difference:", set1 ^ set2)
print("Set Intersection:", set1 & set2)

print("\nMaximum value in Set 1:", max(set1))
print("Minimum value in Set 1:", min(set1))

print("Maximum value in Set 2:", max(set2))
print("Minimum value in Set 2:", min(set2))

