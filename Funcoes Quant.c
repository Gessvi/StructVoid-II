
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void titulo()
{
    printf("\n ==================================\n");
    printf ("\n  \t Par e Impar \n");
    printf("\n=================================== \n");
}

int quantidade(int numero)
{
    int i;
    int contador;
    int par = 0, impar = 0;

    titulo();

    for (i = 1; i <= 6; i++)
    {

        printf("Insira um numero:");
        scanf("%d", &numero);
        contador++;

        if (numero % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    system("cls || clear");

    titulo();
    printf("Numeros Pares: %d \n", par);
    printf("Numeros Impares: %d \n", impar);
}

int main()
{
    int par, impar;
    int numero;

    quantidade(numero);

    return 0;
}