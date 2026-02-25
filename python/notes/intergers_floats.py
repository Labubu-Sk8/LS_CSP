price = float(input("what is the cose of the item: $"))

tax_rate = float(input("What is the tax percent in your state: %"))

tax_rate_decimal = tax_rate/100

total = round(price*(1+tax_rate_decimal), 2)

rounded_total = round(total, 2)

print(rounded_total)

"""apples = int("50")

friends = 16

print("Each of my friends can have",apples//friends, "and I will have", apples%friends, "left over")"""