#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void titulo()
{

    printf("\n ========================== \n");
    printf("\t SENAI BA \n");
    printf("========================== \n");
}

float mediaC(int n1, int n2)
{
    float media;
    media = (n1 + n2) / (float)2;
    return media;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n1, n2;

    titulo();

    printf("Insira sua nota:");
    scanf("%d", &n1);

    printf("Insira sua nota:");
    scanf("%d", &n2);

    system("cls || clear");
    printf("\n ========================== \n");
    printf("\t senai \n");
    printf("\n ========================== \n");

    printf("Primeira do Aluno: %d \n", n1);
    printf("Segundo do Aluno: %d \n", n2);
    printf("Media: %.1f \n", mediaC(n1,n2));

    return 0;
}
