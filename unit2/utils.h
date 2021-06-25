#include <stdio.h>
#include <stdlib.h>

#define pi 3.1416

typedef struct array
{
    int dirArray[5];
}Array;


int libInteger  =  24;


void sayHello(  char message[]   ){
    printf(  "%s\n", message  );
}

void sayMyName( char message[]  ){
    printf(  "%s\n", message  );
}


int addTwoNumbers( int argumento1  , int argumento2  ){
    int result = argumento1 + argumento2;
    return result;
}


//Paso de argumentos por valor//
void modifyVariables( int argumento1, int argumento2  ){

    argumento1 = argumento1*2;
    argumento2 = argumento2*2;
    return;
}

void ShowIntAdress( int* param ){
    printf( "addres: %p\n", param );
}
void ShowIntValueAdress( int* param ){
    printf("value: %i\n", *param );
}

void modifyVariablesAddress( int* dir1  , int* dir2, int multiplo ){
    ShowIntAdress(dir1);
    ShowIntValueAdress(dir1);
    ShowIntAdress(dir2);
    ShowIntValueAdress(dir2);
    *dir1 = *dir1 * multiplo;
    *dir2 = *dir2 * multiplo;

    return;
}

///SWAP EN C//
void swapF (int* a, int*b){
    int n3;
    n3 = *a;
    *a = *b;
    *b = n3;
    return;
}

void fillArray( int array[], size_t tam ){
    for (size_t i = 0; i < tam; i++)
    {
        array[i] = i*2 ; 
    }
    return;
};

void printArray1D( int array[], size_t tam ){
    for (size_t i = 0; i < tam; i++)
    {
        printf("%i\n", array[i] ); 

    }
    return;
}


Array* aFunction( ){
    //int unArreglo[5] = {1,5,6,7,8};
    Array* unArrayType = (Array*)malloc(sizeof(Array) );
    unArrayType->dirArray[0] = 17;
    unArrayType->dirArray[1] = 15;
    unArrayType->dirArray[2] = 19;
    // unArrayType->dirArray[1] = 10;
    return unArrayType;
}