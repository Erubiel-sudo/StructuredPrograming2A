print ("start Program")

Salary= int (input("How much is the salary?: "))
Hours = int (input("How many hours did employee work?: "))
ExtraH=0
Pay=0
ExtraP=0
TotalP=0

if( Hours > 40 ):
    ExtraH= int(Hours-40)
    print("\n""The employee worked:",ExtraH, "extra hours\n")
    Pay= float(Salary*40)
    ExtraP= float(ExtraH*1.5)
    TotalP= float(Pay+ExtraP)
    print ("The total amount to pay to the employee is:",TotalP,"\n")
else:
    TotalP =float (Salary*Hours)
    print ("\n""The total amount to pay employee is:",TotalP, "\n")

print ("End program...")
