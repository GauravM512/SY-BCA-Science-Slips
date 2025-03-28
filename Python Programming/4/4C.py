'''Write a Python program to create a set with any 3 weekdays. 
Add single element to the set and print it. Add multiple elements and print the set.'''

# Accepting weekdays from the user
weekdays = set(input("Enter 3 weekdays separated by spaces: ").split())
print("Initial set:", weekdays)

# Add a single element
single = input("Enter a single weekday to add: ")
weekdays.add(single)
print("After adding one element:", weekdays)

# Add multiple elements
multiple = input("Enter multiple weekdays separated by spaces: ").split()
weekdays.update(multiple)
print("After adding multiple elements:", weekdays)
