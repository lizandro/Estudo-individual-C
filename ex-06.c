#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um algoritimo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias
// considerar um ano 365 dias e um mes 30 dias.

int main ()
{

float base, altura, area;

setlocale (LC_ALL, "Portuguese"); // não sei pra que funciona essa bagaça, parece que localiza o idioma no terrminal

printf("informe o base: ");
scanf ("%f", &base);  // como a variavel é do tipo float coloca-se %f

printf("informe o altura: ");
scanf ("%f", &altura);  // como a variavel é do tipo float coloca-se %f

area = base * altura;

printf ("O valor da area e: %.2f\n", area);

system("pause");
return 0;
}