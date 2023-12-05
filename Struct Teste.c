#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void titulo()
{

    printf("\n \t------Compras da Shein------ \n");
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct shein
    {
        char nome[200];
        char categoria[200];
        float preco;
        char loja[200];
        float soma;
    };
    struct shein produtos[3];
    struct shein loja[2];

    int i;

    for (i = 0; i < 3; i++)
    {
        titulo();

        printf("Produto: \n");
        gets(produtos[i].nome);

        printf("Categoria: \n");
        gets(produtos[i].categoria);

        printf("Preço: \n");
        scanf("%f", &produtos[i].preco);

        fflush(stdin);

        printf("Insira a Loja Desejada: \n");
        gets(loja[i].loja);


        system("cls || clear");
        produtos[i].soma += produtos[i].preco;
    }

    system("cls || clear");

    for (i = 0; i < 3; i++)
    {
        printf("___________________________________ \n");
        printf("\n \t Exibindo Dados \n");
        printf("____________________________________ \n");
        sleep(2);


        system("cls");

        printf("\n \t ====== Dados Concluidos ======= \n ");
        printf("\n");
        
        printf("Nome do Produto: %s \n", produtos[i].nome);
        printf("Categoria do Produto: %s \n", produtos[i].categoria);
        printf("Preço do Produto: %.1f \n", produtos[i].preco);

        printf("Loja Desejada: %s \n", loja[i].loja);

    }

        printf("\n \t *Valor Total da Compra:* %.1f \n", produtos[i].preco);
    return 0;
}