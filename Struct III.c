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
        float nota;
    };

    struct dados_do_aluno aluno[2][2];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        printf("Insira seu nome: ");
        gets(aluno[i][j].nome);

        printf("Insira sua idade:");
        scanf("%d", &aluno[i][j].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Insira sua nota: \n");
            scanf("%f", &aluno[i][j].nota);
            fflush(stdin);
        }
    }
        system("cls || cear");

        printf(" \n Exibindo dados... \n");

        for (i = 0; i < 2; i++)
        {
            printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");
            printf("Nome do aluno: %s \n", aluno[i][j].nome);
            printf("Idade do aluno: %d \n", aluno[i][j].idade);

            for (j = 0; j < 2; j++)
            {
                printf("Nota do aluno: %.1f \n", aluno[i][j].nota);
            }
        }
        return 0;
    }
