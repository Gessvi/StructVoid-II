#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct nota_do_aluno
    {
        char nome[200];
        float nota;
        float media;
        int idd;
        float soma;
    };

    struct nota_do_aluno aluno[3];

    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Insira seu nome: \n");
        gets(aluno[i].nome);
        printf("Insira sua idade: \n");

        scanf("%d", &aluno[i].idd);
        fflush(stdin);

        for (j = 0; j < 2; j++)
        {
            printf("Insira sua nota: \n");
            scanf("%f", &aluno[i].nota);

            aluno[i].soma += aluno[i].nota;
        }
        fflush(stdin);
        aluno[i].media = aluno[i].soma / j;
    }

    system("cls || clear");

    printf("\n Exibindo dados... \n");

    for (i = 0; i < 3; i++)
    {
        printf ("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");
        printf("Nome do aluno: %s \n", aluno[i].nome);

        for (j = 0; j < 2; j++)
        {
            printf("Nota do aluno: %.1f \n", aluno[i].nota);
        }

        printf("media:%1.f\n", aluno[i].media);
        printf("soma das notas:%1.f\n", aluno[i].soma);
        printf("\n");

        if (aluno[i].media >= 7)
        {
            printf("Aprovado \n");
        }
        else if (aluno[i].media >= 5)
        {
            printf("Recuperacao \n");
        }
        else
        {
            printf("Reprovado \n");
        }
    }

    return 0;
}