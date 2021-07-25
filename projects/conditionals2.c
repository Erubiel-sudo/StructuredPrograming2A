#include <stdio.h>
#include <stdlib.h>


int Num_div;
int CheckNumber (int Num_div){
    for (Num_div = 1; Num_div <= 200; Num_div++)
    {
        if (Num_div %3 == 0 && Num_div %5 == 0)
        {
            printf("%d\n", Num_div);
        }
        
    }return 0;  
}

int main(int argc, char** argv){
    printf("Numbers divisible by 3 and 5:\n");
    CheckNumber(Num_div);
return 0;
}