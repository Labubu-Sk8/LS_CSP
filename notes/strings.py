#data type
"""color = input("What is your favorite color?: ").strip().capitalize()

print(color, "is a really cool color!")"""

alphabet = "abcdefghijklmnopqrstuvwxyz"

sentence = "The quick brown fox jumps over the lazy dog."

print(alphabet[4:8])
word = input("What word do you want to change?: ")
new = input("What will the new word be?: ")
start = sentence.find("fox")
print(sentence)
sentence = sentence.replace(word, new)
print(sentence)


