#LS, Financial calculator


monthly_income = float (input("What is your monthly income?: "))

rent = float (input("What is your monthly rent/mortgage?: "))

utilities = float(input("What is your monthly utilites cost?: "))

groceries = float(input("What is your monthly spend on groceries?: "))

transportation = float(input("What is your monthly spend on transportation?: "))

savings = monthly_income * 0.10

spending_money = monthly_income - (rent + utilities + groceries + transportation + savings)

mortgage_precent = (rent / monthly_income) * 100 
utilities_precent = (utilities / monthly_income) * 100 
groceries_precent = (groceries / monthly_income) * 100 
transportation_precent = (transportation / monthly_income) * 100 

print(f"Your monthly income is $", monthly_income)
print(f"Your mortage is $", rent, "which is", round(mortgage_precent, 2), "% of your income")
print(f"Your utilites are $", utilities, "which is", round(utilities_precent, 2), "% of your income")
print(f"Your groceries are $", groceries, "which is", round(groceries_precent, 2), "% of your income")
print(f"Your transportation are $", transportation, "which is", round(transportation_precent, 2),"% of your income")
print(f"You should save ${monthly_income * 0.1} and that is 10% of your income")
print(f" You have ${spending_money} of spending money each month! \n")







