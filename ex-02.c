#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um algoritimo que troque o valor de uma variavel

int main ()
{

float a, b, aux;

setlocale (LC_ALL, "Portuguese"); // não sei pra que funciona essa bagaça, parece que localiza o idioma no terrminal

printf("informe o valor de a: ");
scanf ("%f", &a);


printf("informe o valor de b: ");
scanf ("%f", &b);

printf ("O antigo valor de a: %.2f e b: %.2f\n", a, b);

aux = a;
a = b;
b = aux;

printf ("O novo valor de a: %.2f e b: %.2f\n", a, b);

system("pause");

return 0;
}