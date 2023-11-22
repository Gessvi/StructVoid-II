#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    float nota[3][3];
    char disciplina[3][200];
    float soma;
    float media[3];

    for (i = 0; i < 3; i++)
    {
        printf("Insira a disclipina desejada: \n ");
        gets(disciplina[i]);

        for (j = 0; j < 3; j++)
        {
            printf ("Insira sua nota:", j + 1);
            scanf("%f", &nota[i][j]);

            soma = (nota[i][j]*3) + (nota[i][j]*3) + (nota[i][j] * 4);
        }

        media[i] = soma/10;

        soma = 0;

        fflush(stdin);
    }
    system("cls || clear");

    printf("\n EXIBINDO DADOS \n");

    for (i = 0; i < 3; i++)
    {
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");

        printf("%s \n", disciplina[i]);

        printf(" >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");

        for (j = 0; j < 3; j++)
        {
            printf("Nota do Aluno %d: %.1f \n", j + 1, nota[i][j]);
        }

        printf("Media: %.1f \n", media[i]);
    }

    return 0;
}