print("This is a budget calculator!\n")


income = float(input("How much do you make a month: "))
rent = float(input("How much does your rent cost: "))
utilities = float(input("How much do your utilities cost: "))
groceries = float(input("How much do your groceries cost: "))
transportation = float(input("How much does your transportation cost: "))


savings = income * 0.2
expenses = rent + utilities + groceries + transportation
spending = income - expenses - savings


rent_percentage = (rent / income) * 100
utilities_percentage = (utilities / income) * 100
groceries_percentage = (groceries / income) * 100
transportation_percentage = (transportation / income) * 100
savings_percentage = (savings / income) * 100
expenses_percentage = (expenses / income) * 100


print(f"\nYour monthly income is ${income:.2f}")
print(f"Your monthly expenses are ${expenses:.2f}")
print(f"Your monthly savings are ${savings:.2f}")
print(f"Your monthly spending money is ${spending:.2f}")
print(f"Your rent is {rent_percentage:.2f}% of your income.")
print(f"Your utilities are {utilities_percentage:.2f}% of your income.")
print(f"Your groceries are {groceries_percentage:.2f}% of your income.")
print(f"Your transportation is {transportation_percentage:.2f}% of your income.")
print(f"Your savings are {savings_percentage:.2f}% of your income.")
print(f"Your total expenses are {expenses_percentage:.2f}% of your income.")