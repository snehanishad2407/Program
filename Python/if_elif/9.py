units= int(input("Enter the number of units consumed:"))
if (units <= 100):
    bill = units * 5
    print("The electricity bill is:", bill)
elif (units <=200): 
    bill = units * 7
    print("The electricity bill is:", bill)
else:
    bill = units * 10
    print("The electricity bill is:", bill)