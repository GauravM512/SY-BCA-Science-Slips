'''Write an anonymous function to calculate area of square.'''

area_square = lambda side: side * side


side = float(input("Enter the side length of the square: "))

print("Area of the square:", area_square(side))
