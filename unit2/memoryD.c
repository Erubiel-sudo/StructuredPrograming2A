#include <stdio.h>
#include <stlib.h>

int array[5];
int* arrayPointer = NULL


int main(){

    arrayPointer = (int*)malloc(6* sizeof(int) );
    for (int index =0; index<6; index++ ){
        printf( "arrayPointer[%d]: '%d'\n " , index, arrayPointer[index]);

    };


    return 0;
}