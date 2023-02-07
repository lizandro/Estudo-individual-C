#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um algoritimo que ler um valor do teclado e diga seu sucessor e antecessor

int main ()
{

int valor;

setlocale (LC_ALL, "Portuguese"); // não sei pra que funciona essa bagaça, parece que localiza o idioma no terrminal

printf("informe o valor: ");
scanf ("%d", &valor);


printf ("O valor sucessor: %d e antessesor: %d\n", valor+1, valor-1);


system("pause");
return 0;
}