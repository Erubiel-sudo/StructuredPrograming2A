#Design a program that receives two numbers using argv argument and print the following
#arithmetical operations

from sys import argv 

if __name__ == "__main__":
    
    addition = int(argv[1]) + int(argv[2])
    print(f'The adition is: {addition}')

    substraction = int(argv[1]) - int(argv[2])
    print(f'The substraction is: {substraction}')

    multiplication = int(argv[1]) *int(argv[2])
    print(f'The multiplication is: {multiplication}')

    divition = int(argv[1])/ int(argv[2])
    print(f'The divition is: {divition}')