#Design a program that receives a list of numbers using argv argument and print the
#average value in the console. 

from sys import argv 

if __name__ == "__main__":
    listNum=[]
    for i in range(1, len(argv)):
        listNum.append(int(argv[i]))

    average = (sum(listNum))/(len(listNum))
    print("The average of the numbers is:", average) 