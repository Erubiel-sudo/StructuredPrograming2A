#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "./utils.h"

//arrays
int myIntArray[5];
int myInt = 4;
float myFloat = 3.1416;

typedef struct mago{

    int vida;
    int mana;
    char* nombre;
    //mas atributos//
}Mago;


//typedef struct mago Mago; 



int main(){

    Mago erubiel = { 100, 100, "Erubiel_T" };
    struct mago luis = {200, 200, "Luis"};

    printf("%s\n", erubiel.nombre  );

    fillArray( myIntArray, 5);
    printArray1D( myIntArray, 5 );
    printf("%d", myIntArray[0] );
    printf("%d", myIntArray[1] );
    printf("%d", myIntArray[2] );
    printf("%d", myIntArray[3] );
    printf("%d", myIntArray[4] );

    Array* myArray = aFunction();
    printf( "\n%d ", myArray->dirArray[0]);
    printf( "\n%d ", myArray->dirArray[1]);
    printf( "\n%d ", myArray->dirArray[2]);

    return 0;
}