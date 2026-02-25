    #conditional notes

"""number = -12

if abs(number) < 10:
    print(f"{number} is a single digit number")
elif number < 100:
    print(f"{number} is a double digit number")
else:
    print("Your number is too big")"""


name = input("What is Your name: ").strip().capitalize()

if name == "Xavier" or name == "Jake":
    print("I love your hair. How often do you dye it?")
    often = input("In months how often do you dye your hair: ")
    if int(often) < 3:
        print("Wow that is a lot of work!")
    else:
        print("That is super cool!")
else:
    print(f"Hello {name}!")
  