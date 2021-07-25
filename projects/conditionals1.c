//Design a C program that asks for a username and its years old. Then, you will need to
//check if the user has enough years old to keep in the program.


#include <stdio.h>

int main(){

    char username[255];
    int age;

    printf("Hello, what's your username?\n");
    scanf( "%s" , username);

    printf("How old are you %s?\n", username);
    scanf("%d", &age);

    if (age < 18){
        printf("I'm sorry %s, acces denied \n", username);
    }
    else{
        printf("Acces granted %s, welcome \n", username);

    }return 0;
}