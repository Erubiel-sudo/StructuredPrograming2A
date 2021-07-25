# Using a nested For and For, your task will beprintingthe days corresponding to each month (Consider that not all months have 31 days).


import sys

if __name__ == "__main__":
    meses = ["Enero","Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"]
    
    for i in range(0,12):
            print('Mes: ',meses[i] )

            if (i==1):
                for j in range(1,29):
                    print('dia:', j)

            elif (i==3):
                for j in range (1,31):
                    print('dia:', j)

            elif (i==5):
                for j in range (1,31):
                    print('dia:', j)

            elif (i==8):
                for j in range (1,31):
                    print('dia:', j)

            elif (i==10):
                for j in range (1,31):
                    print('dia:', j)

            elif (i%2==0):
                for j in range(1,32):
                    print("día:",j)

            elif (i==7,11):
                for j in range(1,32):
                    print('dia:', j)

            

            

            


            