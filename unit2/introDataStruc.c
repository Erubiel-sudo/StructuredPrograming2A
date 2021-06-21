#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "./utils.h"

//arrays
int myIntArray[5];

int main(){

    fillArray( myIntArray, 5);
    printArray1D( myIntArray, 5);

    return 0;
}