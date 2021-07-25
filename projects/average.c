#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = 0;
    for (int i = 1; i < argc; i++){
        a = a + atof(argv[i]);
    }

    float listNum = argc-1;
    float average = a/listNum;
    printf("the average is: %f\n",average);
}