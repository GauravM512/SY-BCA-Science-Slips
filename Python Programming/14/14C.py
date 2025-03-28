'''Write a Python program to define class to find validity of a string of parentheses, '(', ')', '{', '}', '[' and ']. 
These brackets must be in the correct order, for example "()" and "()[]{}" are valid but "[)", "({[)]" and "{{{" are invalid.'''

def is_valid(s):
    stack = []
    pairs = {')': '(', '}': '{', ']': '['}

    for char in s:
        if char in pairs:
            if not stack or stack.pop() != pairs[char]:
                return False
        else:
            stack.append(char)

    return not stack


s = input("Enter a string of parentheses: ")

print("Valid" if is_valid(s) else "Invalid")
