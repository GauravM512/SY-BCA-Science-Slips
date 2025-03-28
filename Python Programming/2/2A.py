#Write a Python program to get the 4th element from front and 
# 4th element from last of a tuple.


user_input = input("Enter tuple elements separated by spaces: ")
my_tuple = tuple(user_input.split())


if len(my_tuple) >= 4:
    print("4th element from front:", my_tuple[3])
    print("4th element from end:", my_tuple[-4])
else:
    print("Tuple does not have enough elements")
