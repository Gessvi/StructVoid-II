#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main () {
    setlocale (LC_ALL, "portuguese");

struct lista_empresa 
{
    char nome[200];
    char data[30];
    char matricula[200];
    char endereco[200];
};

struct lista_empresa funcionario[1];
struct lista_empresa cliente[1];

int i;

for ( i = 0; i < 3; i++)
{
printf (" \n \t *****Adquirindo Dados do Cliente***** \n \n");

printf ("°Nome do cliente: \n");
gets (cliente[i].nome);
printf ("°Data de Nascimento cliente: \n");
gets (cliente[i].data);

fflush(stdin);

printf ("°Insira o Endereço do cliente: \n");
gets (cliente[i].endereco);


printf ("______________________________________________ \n");

printf ("\n \t *****Adquirindo Dados do Funcionario***** \n \n");

printf ("°Nome do Funcionario: \n");
gets (funcionario[i].nome);
printf ("°Data de Emissão do Funcionario: \n");
gets (funcionario[i].data);

fflush(stdin);

printf ("°Matricula do Funcionario: \n");
gets (funcionario[i].matricula);
printf ("°Insira o Endereço do Funcionario: \n");
gets (funcionario[i].endereco);

}

system ("cls || clear");

printf ("-------------------------------------- \n");

for ( i = 0; i < 3; i++)
{
    printf ("\n \t Exibindo Dados do Cliente... \n \n");
    sleep (2);
    printf ("*Nome do Cliente: %s \n", cliente[i].nome);
    printf ("*Data de Nascimento Cliente: %s \n", cliente[i].data);
    printf ("*endereço do Cliente: %s \n", cliente[i].endereco);

    printf (" \n \t Exbindo Dados do Funcionario... \n \n");
    sleep (2);
    printf ("*Nome do Funcionario: %s \n", funcionario[i].nome);
    printf ("*Data de Emissão do Funcionario: %s \n", funcionario[i].data);
    printf ("*Numero da Matricula: %s \n", funcionario[i].matricula);
    printf ("*endereço do Funcionario: %s \n", funcionario[i].endereco);

}
return 0;
}