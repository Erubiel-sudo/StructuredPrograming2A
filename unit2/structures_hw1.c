#include <stdio.h>

struct ErubielData{
    char *name;
    int age;
    char *born;
};

int main() {
    struct ErubielData erubiel;

    erubiel.name = "Erubiel Tun";
    erubiel.age = 19;
    erubiel.born = "Nov 27, 2002";

	printf("My Name is: %s \n", erubiel.name);
	printf("My Age is: %d \n", erubiel.age);
	printf("My Born is: %s \n", erubiel.born);

	return(0);
}