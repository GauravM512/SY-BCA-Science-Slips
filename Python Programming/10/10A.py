'''Write an anonymous function to calculate area of square'''

side = float(input("Enter the side length of the square: "))

area = lambda x: x * x

print(f"Area of the square: {area(side)}")
