print("this is a budget calculator.")
income = float(input("how much do you make a month"))
rent = float(input("how much do your reny cost?"))
utilities = float(input("how do your utilities cost?"))
groceries = float(input("how much fo your groveries cost"))
transportation = float(input("how much do your transportation cost?"))
saving = income * .2
exspenses = rent + utilities + groceries + transportation
spend = income - exspenses - saving
print (f"you make ${income:.2f}")
print (f"your exspenses are ${exspenses:.2f}")
print (f"your saving are ${saving:.2f}")
print (f"your spending money is ${spend:,2f}")
prent = rent/income *100
putilities = utilities/income *100
pgroceries = groceries/income *100
ptransportation = transportation/income *100
psaving = saving/income *100
pexspenses = exspenses/income *100
print (f"your rent {int(prent)}% of your income.")
print (f" your utilities is {int(putilities)}%of your income.")
print (f"your groceries is {int(pgroceries)}% of your income.")
print (f"your transportaion {int(ptransportation)}% is of your income.")
print (f"your saving is {int(psaving)}% of your income.")
print (f"your exspenses is {int(pexspenses)}% of your income.")