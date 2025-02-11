def in_range(number, start, end):
    """
    Check if a number is within a given range.

    Parameters:
    - number: The number to check.
    - start: The start of the range (inclusive).
    - end: The end of the range (inclusive).

    Returns:
    - True if the number is within the range, False otherwise.
    """
    return start <= number <= end

# Example usage:
number = 7
start = 5
end = 10
print(in_range(number, start, end))  # Output: True
