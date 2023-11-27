#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

struct dados_aluno
{
    char nome[200];
    char endereco[200];
    int idade;
};

struct dados_aluno aluno[2];

int i;

for ( i = 0; i < 2; i++)
{
    printf ("Insira seu nome:\n");
    gets(aluno[i].nome);

    printf ("Insira sua idade: \n");
    scanf ("%d", &aluno[i].idade);

     fflush (stdin);

    printf ("Insira seu endereco: \n");
    gets (aluno[i].endereco);

    fflush (stdin);
}

system ("cls || clear");

printf ("\n Exibindo dados...");

for ( i = 0; i < 2; i++)
{
    printf ("Nome do aluno: %s \n", aluno[i].nome);
    printf ("idade do aluno: %d \n", aluno[i].idade);
    printf ("Endereco do aluno: %s \n", aluno[i].endereco);
    printf ("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");
}
return 0;
}