//Design a program that receives a list of numbers using argvargument and printthe average value in the console.//


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int x = 0;
    for (int i = 1; i < argc; i++){
        x = x + atof(argv[i]);
    }

    float listNum = argc-1;
    float average = x/listNum;
    printf("the average is: %f\n",average);
}