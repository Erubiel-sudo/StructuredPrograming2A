#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "./utils.h"

int myInt = 4;
float myFloat = 3.1416;

int* pointerInt = &myInt;

int main (){
    printf ("address myInt: %p,   myInt: %d \n",  &myInt, myInt  );
    printf ("address myFloat: %p,  myFloat: %f \n ",  &myFloat,  myFloat);
    printf ("address pointerInt: %p, pointerInt: %p \n ", &pointerInt, pointerInt );
    *pointerInt = 6;
    printf ("address myInt: %p,   myInt: %d \n",  &myInt, myInt  );

    Array* myArray = returnArray(); 
    printf( "%d\n", myArray->dirArray[1]  );


    
    return 0;

}