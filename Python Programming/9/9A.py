'''Write a Python program to create a tuple using two different tuples.'''


tuple1 = tuple(map(int, input("Enter elements for Tuple 1 separated by spaces: ").split()))
tuple2 = tuple(map(int, input("Enter elements for Tuple 2 separated by spaces: ").split()))

combined_tuple = tuple1 + tuple2

print("\nTuple 1:", tuple1)
print("Tuple 2:", tuple2)
print("\nCombined Tuple:", combined_tuple)
