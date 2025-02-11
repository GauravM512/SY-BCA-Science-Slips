def display_pattern(rows):
    for i in range(rows, 0, -1):  # Outer loop for rows, starting from the given number of rows and decrementing by 1
        for j in range(1, i + 1):  # Inner loop for numbers in each row, from 1 to the current row number
            print(j, end=" ")      # Print the numbers followed by a space
        print()                    # Move to the next line after printing each row

# Input the number of rows for the pattern
rows = int(input("Enter the number of rows: "))

# Display the pattern
display_pattern(rows)
