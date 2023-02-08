#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
    int i, j;
    int numero[5];
    int x, y;

    // Solicita ao usuário para inserir os dados
    for (i = 0; i < 5; i++){
        printf("Digite o número %d: ", i+1);
        scanf("%d", &numero[i]);
    }

    // Inicializa a interface gráfica
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Desenha o gráfico na tela
    x = 50;
    y = getmaxy()-50;
    for (i = 0; i < 5; i++){
        line(x, y, x, y-numero[i]);
        x += 20;
    }

    getch();
    closegraph();

    return 0;
}