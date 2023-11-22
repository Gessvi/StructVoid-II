#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i, j;
    char banda[3][200];
    char integrantes[3][5][200];

    for (i = 0; i < 3; i++)
    {
        printf("Insira o nome da banda: \n");
        gets(banda[i]);

        for (j = 0; j < 5; j++)
        {
            printf ("Insira o nome dos integrantes:", j + 1);
            gets(integrantes[i][j]);
        }

        fflush(stdin);
    }

    fflush (stdin);

    system("cls||clear");

    printf("\n EXIBINDO DADOS \n");

    for (i = 0; i < 3; i++)
    {
        printf ("Nome da Banda: --%s-- \n", banda[i]);

        for (j = 0; j < 5; j++)
        {
            printf("Nome do Integrantes %d: %s \n",j + 1, integrantes[i][j]);
        }
    }

    return 0;
}