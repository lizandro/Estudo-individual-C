#include <stdio.h>
#include <windows.h>
#include <unistd.h>

#include <stdlib.h> 

 int main(void)
{
    char numeroTelefone[20];
    char mensagem[100];

    printf("Digite o numero de telefone: ");
    scanf("%s", numeroTelefone);

    printf("Digite a mensagem que voce deseja enviar: ");
    scanf("%s", mensagem);

    // Abre o WhatsApp no Windows
    ShellExecute(NULL, "open", "https://web.whatsapp.com/send?text=%s&phone=%s", mensagem, numeroTelefone, SW_SHOWNORMAL);

    // Pausa por 5 segundos
    //sleep(5);

    // Simula um enter
    // system("echo.");

    return 0;
}

