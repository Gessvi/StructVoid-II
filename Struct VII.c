#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct Lista_de_rg
    {
        char nome[200];
        char data[20];
        int cpf;
        int rg;
    };

    struct Lista_de_rg rg[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Nome do Usuario: \n");
        gets(rg[i].nome);

        printf("Data de nascimento: \n");
        gets (rg[i].data);

        printf("Seu CPF: \n");
        scanf("%d", &rg[i].cpf);

        printf("Rg do Usuario: \n");
        scanf("%d", &rg[i].rg);

        fflush(stdin);
    }

    system("cls || clear");

    printf("\n Exibindo Dados do Usuario... \n");

    for (i = 0; i < 3; i++)
    {
        sleep(2);

        printf ("\n <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");
        printf("Nome do Usuario: %s \n", rg[i].nome);
        printf("Data de nascimento: %s \n", rg[i].data);
        printf("Seu CPF: %d \n", rg[i].cpf);
        printf("Rg do Usuario: %d \n", rg[i].rg);
    }

    return 0;
}