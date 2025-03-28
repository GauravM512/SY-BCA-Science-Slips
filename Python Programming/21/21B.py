'''Write a Python program which accepts 6 integer values and prints “DUPLICATES” 
if any of the values entered are duplicates otherwise it prints “ALL UNIQUE”.
Example: Let 5 integers are (32, 10, 45, 90, 45, 6) then output “DUPLICATES” to be printed.'''

nums = []
for i in range(6):
    num = int(input(f"Enter number {i + 1}: "))
    nums.append(num)

if len(nums) != len(set(nums)):
    print("DUPLICATES")
else:
    print("ALL UNIQUE")
