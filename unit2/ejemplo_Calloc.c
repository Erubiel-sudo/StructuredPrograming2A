#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,n;
    int * pData;
         printf ("El número de dígitos que se introducirán:");
    scanf ("%d",&i);
    pData = (int*) calloc (i,sizeof(int));
    if (pData==NULL) exit (1);
    for (n=0;n<i;n++)
    {
                 printf ("Ingrese un número #% d:", n + 1);
        scanf ("%d",&pData[n]);
    }
         printf ("El número que ingresaste es:");
    for (n=0;n<i;n++) printf ("%d ",pData[n]);
   
    free (pData);
    system("pause");
    return 0;
}