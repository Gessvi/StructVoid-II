#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void titulo (){

    printf (" \n \t-- De Metro Para Centimetro -- \n");
}

int cent (int numero){
    int centimetro = 0;

    centimetro = numero *100;
    return centimetro;
}


int main (){
int numero;

titulo();
printf ("Insira um valor em metro: \n");
scanf ("%d", &numero);

system ("cls || clear");

printf ("____________________________ \n");
printf ("\t Exibindo dados... \n");
printf ("______________________________ \n");
printf (".", sleep(1));
printf (".", sleep(1));
printf (".", sleep(1));
sleep(1);

system ("cls");
printf ("--------------------------- \n");
printf ("\tDados Finais\n");
printf ("--------------------------- \n");
printf ("Centimetro: %d \n", cent (numero));

return 0;
}
