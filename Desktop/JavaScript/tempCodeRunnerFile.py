a = input("Enter a number: ")
b = int(a[0])
c = int(a[1])
if b == 4 :
    print("This is a Visa card")
elif b == 2 :
    print("This is a Mastercard")
elif b == 6 :
    if c == 2 or c == 0 or (b == 6 and (c == 3 or c == 4 or c == 5)):
        print("This is a Rupay card")
    else:
        print("Enter a valid Rupay card number")
else :
    print("Enter a valid card number")
