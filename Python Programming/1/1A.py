#Write a Python function to check whether a number is in a given range. [10 M]
def is_in_range(num, start, end): 
    return start <= num <= end

start = int(input("Enter start of range: ")) 
end = int(input("Enter end of range: "))
n = int(input("Enter num to check: "))

if is_in_range(n, start, end): 
    print(f"{n} is in the range {start} to {end}.")
else: 
    print(f"{n} is not in the range {start} to {end}.")