#include <stdio.h>
#include "/mnt/c/Users/Erubiel Tun/Documents/StructuredPrograming2A/unit2/utils.h"



int main(){
    int a, b;
    printf("Enter values for a and b\n");
    scanf("%d%d", &a, &b);
    swapF (&a, &b);
    printf("a = %d and b = %d\n", a, b);

    return 0;
}