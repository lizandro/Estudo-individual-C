#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um algoritimo para ler o numero total de eleitores de um municipio, o numero de votos brancos, 
// nulos e validos. calcular e escrever o percentual que cada um representa em relação ao total de eleitores.

int main ()
{

float TotEleit, TotVoBr, TotVoNu, TotVoVa;
float PerBr, PerNu, PerVa;

setlocale (LC_ALL, "Portuguese"); // localiza o idioma no terrminal

printf("informe o total de eleitores: ");
scanf ("%d", &TotEleit);  // como a variavel é do tipo Inteiro coloca-se %d

printf("informe o numero de votos brancos: ");
scanf ("%d", &TotVoBr);

printf("informe o numero de votos nulos: ");
scanf ("%d", &TotVoNu);

printf("informe o numero de votos validos: ");
scanf ("%d", &TotVoVa);

PerBr = (100 * TotVoBr) / TotEleit;
PerNu = (100 * TotVoNu) / TotEleit;
PerVa = (100 * TotVoVa) / TotEleit;

printf ("------- ------- ------- ------- -------\n");
printf ("O percentual de votos brancos e: %.2f %%\n", PerBr);
printf ("O percentual de votos nulos e: %.2f %%\n", PerNu);
printf ("O percentual de votos validos e: %.2f %%\n", PerVa);

return 0;
}