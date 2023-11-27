#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");

struct ficha_aluno 
{
    char nome[200];
    int idade;
};

struct ficha_aluno aluno;

printf ("Insira seu nome:");
gets (aluno.nome);

printf ("Insira sua idade:");
scanf ("%d", &aluno.idade);

system ("cls || clear");

printf ("\n Exibindo dados... \n");

printf ("Nome do aluno: %s \n", aluno.nome);
printf ("Idade do aluno: %d \n", aluno.idade);






return 0;
}