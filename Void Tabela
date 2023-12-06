#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void titulo()
{
    printf("\n \t--tabela-- \n");
}

int somar(int numero)
{
    int soma = 0;

    soma = numero + numero;
    return soma;
}

int multi(int numero)
{
    int multiplicacao = 0;

    multiplicacao = numero * numero;
    return multiplicacao;
}

int dividir(int numero)
{
    int divisao = 0;

    divisao = numero / numero;
    return divisao;
}

int diminuir(int numero)
{
    int subtracao = 0;

    subtracao = numero - numero;
    return subtracao;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

int i;
int numero;

for ( i = 0; i < 2; i++)
{
  titulo();
    printf ("Insira sua nota: ");
    scanf ("%d", &numero);

  system ("cls || clear");
}

  titulo();
printf ("Soma: %d \n", somar(numero));
printf ("Divisão: %d \n", dividir (numero));
printf ("Multiplicacao: %d \n", multi(numero));
printf ("Subtracao: %d \n", diminuir (numero));


    return 0;
}
