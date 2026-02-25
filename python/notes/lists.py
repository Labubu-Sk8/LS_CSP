#list

ages = [22,23,25,28,34,36,38,39]
names = ["Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier",  "Jake"]
print(names[0])
print(len(names))
print(names)
index = names.index("Vienna")
names.pop(index) #removes item from the list: if no idnex given then the last item is removed
names.append("Jayshree") #adds to the end of the list
print(names)

for name in names:
    print(name)

for number in ages:
    print(f" {number} squared is {number **2}")

for i in range(20):
    print(f"It is the {i} iteration of this loop")