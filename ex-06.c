#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um algoritimo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa 
// expressa apenas em dias
// considerar um ano 365 dias e um mes 30 dias.

int main ()
{

int anos, meses, dias, TotDias;

setlocale (LC_ALL, "Portuguese"); // localiza o idioma no terrminal

printf("informe o quantos anos: ");
scanf ("%d", &anos);  // como a variavel é do tipo Inteiro coloca-se %d

printf("informe quantidade de meses: ");
scanf ("%d", &meses);  // como a variavel é do tipo Inteiro coloca-se %d

printf("informe a quantidade de dias: ");
scanf ("%d", &dias);  // como a variavel é do tipo Inteiro coloca-se %d

TotDias = anos * 365;
TotDias = TotDias + (meses * 30);
TotDias = TotDias + dias;

printf ("O valor em dias e: %d \n", TotDias);

system("pause");
return 0;
}