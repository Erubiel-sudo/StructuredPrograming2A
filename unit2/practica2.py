import sys

def listElementsSum(input):
    add = 0
    for column in range (0, len (input[0] )):
        for row in range(0, len(input)):
            if input[row][column]==0: break
            add = add + input[row][column]
    return add



    print(input)


if __name__ == "__main__":
    print("practica2 CodeBots")
    edificio = [ [0,1,1,2],
                 [0,5,0,0],
                 [2,0,3,3]]
    print( listElementsSum( edificio))


    
        
