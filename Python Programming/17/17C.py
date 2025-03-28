'''Write a Python program to display the following pattern 
(Floyd's triangle) For n=3
1
2 3
4 5 6'''

n = int(input("Enter the number of rows: "))
num = 1

for i in range(1, n + 1):
    for j in range(i):
        print(num, end=" ")
        num += 1
    print()
