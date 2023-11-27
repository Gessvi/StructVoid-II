#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_do_aluno
    {
        char nome[200];
        int idade;
        float peso;
        float altura;
    };

    struct dados_do_aluno aluno[2];
     int i;

    for (i = 0; i < 2; i++)
    {
        printf("Insira seu nome:");
        gets(aluno[i].nome);

        printf("Insira sua idade:");
        scanf("%d", &aluno[i].idade);

        printf("Insira seu peso:");
        scanf("%f", &aluno[i].peso);

        printf("Insira seu altura:");
        scanf("%f", &aluno[i].altura);

        fflush(stdin);
    }

    system("cls||clear");

    printf("\n Exibindo dados... \n");

    for (i = 0; i < 2; i++)
    {
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");
        printf("Nome do aluno: %s \n", aluno[i].nome);
        printf("Idade do aluno: %d \n", aluno[i].idade);
        printf("Peso do aluno: %.2f \n", aluno[i].peso);
        printf("Altura do aluno: %.2f \n", aluno[i].altura);
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    }
    return 0;
}