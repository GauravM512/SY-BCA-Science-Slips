def floyds_triangle(n):
    num = 1
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(num, end=" ")
            num += 1
        print()

# Input the number of rows for Floyd's triangle
n = int(input("Enter the number of rows for Floyd's triangle: "))

# Print Floyd's triangle
floyds_triangle(n)
