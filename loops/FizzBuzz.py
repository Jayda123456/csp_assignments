#loopthat counts to 50
i = 0 
while i<=49:
#increases i by one each loop
    i+=1
    if (i%3==0 and i%5==0):
        print("fizzbuzz")
    elif (i%3==0):
        print("fizz")
    elif (i%5==0):
        print("buzz")
    else:
        print(i)

