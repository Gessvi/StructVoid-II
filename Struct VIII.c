#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct lista_cpf
    {
        char nome[200];
        int idade;
        int cpf[20];
    };

    struct lista_cpf cliente;
    struct lista_cpf funcionario;

    printf("\n Adquirindo Dados do Cliente \n");
    printf("Nome do cliente: \n");
    gets(cliente.nome);

    printf("Insira sua idade:");
    scanf("%d", &cliente.idade);

    printf("Insira o cpf: \n");
    scanf("%d", &cliente.cpf);

    fflush(stdin);

    printf("\n Adquirindo Dados do Funcionario \n");

    printf("Nome do Funcionario: \n");
    gets(funcionario.nome);

    printf("Insira sua idade:");
    scanf("%d", &cliente.idade);

    printf("Insira o cpf: \n");
    scanf("%d", &cliente.cpf);

fflush(stdin);
system("cls || clear");

    printf("\n Exibindo Dados do Cliente... \n");
    printf("Nome do cliente: %s \n", cliente.nome);
    printf("Idade do cliente: %d \n", cliente.idade);
    printf("CPF do cliente: %d \n", cliente.cpf);
    
    printf("\n Exibindo Dados do Funcionario...\n");
    printf("Nome do Funcionario: %s \n", funcionario.nome);
    printf("Idade do Funcionario: %d \n", funcionario.idade);
    printf("CPF do Funcionario: %d \n", funcionario.cpf);

    return 0;
}