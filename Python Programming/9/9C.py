'''Write a Python program to count the occurrences of each word in a given sentence.'''

sentence = input("Enter a sentence: ")

words = sentence.split()
w_count = {}

for word in words:
    word = word.strip(".,!?").lower()  # Removing punctuation and converting to lowercase
    if word in w_count:
        w_count[word] += 1
    else:
        w_count[word] = 1

# Displaying the word occurrences
print("\nWord occurrences:")
for word, count in w_count.items():
    print(f"{word}: {count}")