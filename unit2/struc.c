#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "./utils.h"



int main(int argc, char** argv){

    int otroInt = 9;
    
    UTILS myStructC = {1, ShowIntAdress};
    printf("myInt: %d. &myStructC: %p\n", myStructC.myInt, &myStructC);
    UTILS* myStructP = &myStructC;

    printf("myInt: %d\n", (*myStructP).myInt);
    printf("myInt: %d\n", myStructP->myInt);
    myStructC.ShowIntAdress(&otroInt);


    return 0;
}