#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void titulo (){

    printf ("----PAR OU IMPAR--- \n");
}

int Par (int numero){

    if (numero % 2 == 0)
    {
       printf ("%d: E par", numero);
    }
    else
    {
        printf ("\n %d: E impar ", numero);
    }
    
}

int main (){
    int numero;

titulo();
printf ("insira um numero:");
scanf ("%d", &numero);

system ("cls || clear");

titulo();
Par(numero);
return 0;
};