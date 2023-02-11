#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um algoritimo para ler o salario mensal atual de um funcionario e o percentual de reajuste.
// calcule e escreva o valor do novo salario.

int main ()
{

float SalAtual, SalNovo, PercReajuste;

setlocale (LC_ALL, "Portuguese"); // localiza o idioma no terrminal

printf("informe o salario atual: ");
scanf ("%f", &SalAtual);  // como a variavel é do tipo Inteiro coloca-se %f

printf("informe o percentual de reajuste: ");
scanf ("%f", &PercReajuste);

SalNovo = SalAtual * (1 + (PercReajuste / 100));

printf ("O salario e: %.2f %%\n", SalNovo);

return 0;
}