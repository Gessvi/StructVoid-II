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
        int idade;
        float soma;
    };

    struct nota_do_aluno aluno[3];

    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Insira seu nome: \n");
        gets(aluno[i].nome);

        printf("Insira sua idade: \n");
        scanf("%d", &aluno[i].idade);

        fflush(stdin);

        for (j = 0; j < 2; j++)
        {
            printf("Insira sua nota: \n");
            scanf("%f", &aluno[i].nota);

            aluno[i].soma += aluno[i].nota;
        }
        printf("°---------------- ° -----------------° \n");
        fflush(stdin);
        aluno[i].media = aluno[i].soma / j;
    }

    system("cls || clear");

    printf("\n Exibindo dados... \n");

    for (i = 0; i < 3; i++)
    {
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");
        printf("Nome do aluno: %s \n", aluno[i].nome);
        printf("Idade do Aluno: %d \n", aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Nota do aluno: %.1f \n", aluno[i].nota);
        }

        printf("media:%1.f\n", aluno[i].media);
        printf("\n");

        if (aluno[i].media >= 7)
        {
            printf(" \t *APROVADO* \n");
        }
        else if (aluno[i].media >= 5)
        {
            printf(" \t *RECUPERACAO* \n");
        }
        else
        {
            printf("  \t *REPROVADO* \n");
        }
    }

    return 0;
}
