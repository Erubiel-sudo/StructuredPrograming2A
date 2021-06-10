#include <stdio.h>


int myNumber =3;
float myFloat = 3.1416;
char myString[255] = "Hola mundo";

//Declarar y definirla
void sayHello( char message[]   ){
    printf( "%s\n",  message    );
}



int main(   ){

    sayHello( "Hello world" );

    return 0;
}