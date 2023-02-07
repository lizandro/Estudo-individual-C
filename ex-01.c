#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{

float precoAtual, precoNovo;

setlocale (LC_ALL, "Portuguese");  // não sei pra que funciona essa bagaça

printf("informe o preco do produto: ");
scanf ("%f", &precoAtual);  // coloca valor digitado na variavel precoAtual

precoNovo = precoAtual - (precoAtual * 0.1);  // obs, numeros inteiros são alocados como int mesmo se for uma divisão

printf ("O novo preco do produto e: R$ %.2f\n", precoNovo);

system("pause");

return 0;
}