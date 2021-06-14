#include <stdio.h>
#include "./utils.h"

int myNumber =3;
float myFloat = 3.1416;
char myString[255] = "Hola mundo";

// primer metodo para funciones
//Declarar y definirla   
// void sayHello(   char message[]    ){
//         printf(  "%s\n",  message    );
// } 

// Segundo metodo para funciones
//1-. Declaro
// void sayMyName(   char message[]    );

// int addTwoNumbers( int  argumento1   , int argumento2   ); //Declarando;

int main(  ){
        sayHello(  "Hello world" ); 
        sayMyName( "Erubiel" );
        int myResult =     addTwoNumbers(  2, 5   );
        printf( "myResult is equal to:  %d \n",   myResult  );

        printf("%d", libInteger  );
        return 0;
}

// Segundo metodo para funciones
//2-. Definimos
// void sayMyName(   char message[]    ){
//         printf(  "%s\n",  message    );
// }


// int addTwoNumbers( int  argumento1   , int argumento2   ){
//         int result = argumento1 + argumento2;
//         return result; 
// }
