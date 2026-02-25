#LS Time Of Day practice code

time = int(input("What time is it right now in military time?: "))

if time >= 12 and time <= 15:
    print("Good Afternoon")
elif time < 12:
    print("Good Morning")
else:
    print("Good Evening")

