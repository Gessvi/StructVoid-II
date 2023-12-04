#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void titulo () {
    printf ("\n =================\n");
    printf (" \tTABUADA \n");
    printf ("\n =================\n");

}

void tabela (int numero){
    int i;

    for ( i = 1; i <= 10; i++)
    {
        printf ("%d x %d = %d \n", numero, i, numero*i);
    }
        

}

int main () {

    int numero;


printf ("Insira um numero:");
scanf ("%d", &numero);

system ("cls || clear");

titulo ();

tabela(numero);

return 0;
}