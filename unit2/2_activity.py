import sys 

# if __name__ == "__main__":
#     tam = len(sys.argv)
#     for argumento in sys.argv:
#         if argumento=="-h" or argumento="--help" or argumento=="":
#             print("bienvenido\
# \n-h or --help: ayuda\
# \n-s or --suma: Sumar n cantidad de numeros\
# \n-s or --resta: restar n cantidad de numeros\
# \n-s or --mul: mul n cantidad de numeros\
# \n-s or --div: div n cantidad de numeros")

#         if argumento =="-s" or argumento=="--suma":
#             i=2
num1 = int(input('Enter First number: '))
num2 = int(input('Enter Second number '))
add = num1 + num2
dif = num1 - num2
mul = num1 * num2
div = num1 / num2
floor_div = num1 // num2
power = num1 ** num2
modulus = num1 % num2
print('Sum of ',num1 ,'and' ,num2 ,'is :',add)
print('Difference of ',num1 ,'and' ,num2 ,'is :',dif)
print('Product of' ,num1 ,'and' ,num2 ,'is :',mul)
print('Division of ',num1 ,'and' ,num2 ,'is :',div)
print('Floor Division of ',num1 ,'and' ,num2 ,'is :',floor_div)
print('Exponent of ',num1 ,'and' ,num2 ,'is :',power)
print('Modulus of ',num1 ,'and' ,num2 ,'is :',modulus)