#include "stdio.h"
 #include "malloc.h" // La función malloc () está incluida en malloc.h 
int main(void)
{
         char * a = NULL; // Declara un puntero a un tipo char *         
         a = (char *) malloc (100 * sizeof (char)); // Use malloc para asignar la primera dirección de la memoria, y luego asígnela a un
       // Si malloc falla, puede obtener algún registro. El error de juicio de condición devuelto aquí debería ser: if (NULL == a)   
    if(!a)
    {
        perror("malloc");
        return -1;
    }
         sprintf (a, "%s", "HelloWorld\n"); // "HelloWorld \ n" escribe la dirección apuntada por un
    printf("%s\n",a);
         free (a); // Liberar la dirección de memoria utilizada
    return 0;
}