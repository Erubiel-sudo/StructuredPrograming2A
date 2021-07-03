#include <stdio.h>

struct ErubielData{
    //float my_float = 3.14; //  %f
    char *name;
    int age;
    char *born;
    float height;
};

int main() {
    struct ErubielData erubiel;

    erubiel.name = "Erubiel Tun";
    erubiel.age = 19;
    erubiel.born = "Nov 27, 2002";
    erubiel.height = 1.83;

	printf("My Name is: %s \n", erubiel.name);
	printf("My Age is: %d \n", erubiel.age);
	printf("My Born is: %s \n", erubiel.born);
    printf("My height is: %f M\n", erubiel.height);

	return(0);
}