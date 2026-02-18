#LS Updated financial calulator

def user_input(prompt):
    return float(input(prompt))


def calculate_percent(income, expense):
    return (expense / income) * 100


def main():

    income = user_input("Hi, what is your monthly income? $")
    
    if income <= 0:
        print("Income must be a positive number.")
        return  

    rent = user_input("What is your monthly rent? $")
    utilities = user_input("What are your monthly utility bills? $")
    groceries = user_input("How much do you spend on groceries each month? $")
    transportation = user_input("How much do you spend on transportation each month? $")

   
    rent_percent = calculate_percent(income, rent)
    utilities_percent = calculate_percent(income, utilities)
    groceries_percent = calculate_percent(income, groceries)
    transportation_percent = calculate_percent(income, transportation)

    
    savings_percent = 10
    savings = income * (savings_percent / 100)

    
    total_expenses = rent + utilities + groceries + transportation + savings
    leftover = income - total_expenses

    
    print(f"\nYour rent is ${rent:.2f}, which is {rent_percent:.1f}% of your income.")
    print(f"Your utilities are ${utilities:.2f}, which is {utilities_percent:.1f}% of your income.")
    print(f"Your groceries are ${groceries:.2f}, which is {groceries_percent:.1f}% of your income.")
    print(f"Your transportation is ${transportation:.2f}, which is {transportation_percent:.1f}% of your income.")
    print(f"You should save ${savings:.2f} each month, which is {savings_percent}% of your income.")

    if leftover < 0:
        print(f"\n You are overspending by ${abs(leftover):.2f} each month.")
    else:
        print(f"\n You have ${leftover:.2f} of spending money left each month!")
