ch=int(input("Enter the year which you want to check: "))
y=len(str(abs(ch)))
if y!= 4:
    print("invalid number")
if y==4:
    if ch%4==0:
        print("Entered year is a leap year.")
    else:
        print("Entered year is not a leap year.")

