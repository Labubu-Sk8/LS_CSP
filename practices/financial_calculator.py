#LS, Financial calculator


monthly_income = float (input("What is your monthly income?: "))

rent = float (input("What is your monthly rent/mortgage?: "))

utilities = float(input("What is your monthly utilities spend?: "))

groceries = float(input("What is your monthly spend on groceries?: "))

transportation = float(input("What is your monthly spend on transportation?: ")) 

rent_precent = rent/monthly_income * 100

utilities_precent = utilities/monthly_income * 100

groceries_precent = groceries/monthly_income * 100

transportation_precent = transportation/monthly_income * 100

savings = monthly_income * 0.10

spending_money = monthly_income - rent + utilities + groceries + transportation
              
print("Your monthly income is $", monthly_income, "which is", rent_precent, "% of your income" + round(1+rent_precent),2)







