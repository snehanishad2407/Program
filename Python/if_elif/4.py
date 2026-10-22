a=int(input("Enter first number:"))
b=int(input("Enter second number:"))
if(a>b):
    print(a,"is greater number than",b)
elif(a<b):
    print(b,"is greater number than",a)
elif(a==b):
    print("Both numbers are equal")
else:
    print("Invalid input")
    