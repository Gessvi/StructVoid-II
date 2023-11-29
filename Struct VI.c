#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
struct Lista_de_livros
{
    char nome[200]; 
    char autor [200];
    char ctg [200];
    float preco;
};

struct Lista_de_livros livros[3];
int i;

    for ( i = 0; i < 3; i++)
    {
        printf ("° Nome do livro: \n");
        gets (livros[i].nome);

        printf (" \n ° Nome do Autor: \n");
        gets (livros[i].autor);

        printf ("\n ° Qual a categorica: \n");
        gets (livros[i].ctg);

        printf (" \n ° Qual o preço do livro: \n");
       scanf ("%f", &livros[i].preco);

        printf ("\n ___________________________________________ \n");

        fflush (stdin);
    }
    
system ("cls || clear");

printf ("\n Exibindo Dados dos Livros...\n");

for ( i = 0; i < 3; i++)
{
    printf ("\n °----------------- ° ----------------------°\n");
    printf ("Nome do Livro: %s \n", livros[i].nome);
    printf ("Nome do Autor: %s \n", livros[i].autor);
    printf ( "Categoria: %s \n", livros[i].ctg);
    printf ( "Preço: %.1f \n", livros[i].preco);
}

return 0;
}