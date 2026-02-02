#Loop Notes
import random

"""start = 0

while start <= 20:
    print(start)
    start += 2"""

"""count = 1
goose = random.randint(1,10)

while count != goose:
    print("Duck")
    count += 1

print("GOOSE!")"""

number = random.randint(1,25)

while True:
    guess = int(input("Guess a number between 1 and 25: "))

    if guess == number:
        print(f"Yes the number was {number}. You won!")
        break #break takes us out of the loop and it only works in loops
    elif guess > 25:
        print("I asked for a number between 1 and 25. Please try again.")
    elif guess < number:
        print("Guess higher")
    else:
        print("Guess lower")
