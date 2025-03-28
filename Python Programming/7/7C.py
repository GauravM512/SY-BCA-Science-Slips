'''Write a Python program to unpack a tuple in several variables. Display type of each variable. . [20M]'''

values = tuple(input("Enter tuple elements separated by spaces: ").split())

a, b, c, d = values

print("\nTuple:", values)

print("\nUnpacked Variables and Their Types:")
print(f"a = {a}, Type: {type(a)}")
print(f"b = {b}, Type: {type(b)}")
print(f"c = {c}, Type: {type(c)}")
print(f"d = {d}, Type: {type(d)}")
