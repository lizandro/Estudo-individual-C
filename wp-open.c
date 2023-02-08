#include <stdio.h>
#include <windows.h>
#include <unistd.h>

#include <stdlib.h> 

/* int main(void)
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

int main() 
{ 
    // Abre o WhatsApp 
    system("start /d \"C:\\Users\\Lizandro\\AppData\\Local\\WhatsApp\\WhatsApp.exe\""); 
  
    // Espera 10 segundos para dar tempo do WhatsApp abrir 
    Sleep(10000); 
  
    // Envia a mensagem 
    system("CLICK 736,720"); 
    system("CLICK 712,336"); 
    system("STRING +55 11 999999999"); 
    system("CLICK 712,368"); 
    system("STRING Mensagem de Exemplo"); 
    system("CLICK 824,568"); 
  
    return 0; 
}
*/

int main() 
{ 
    // Abre o WhatsApp 
    system("start /d \"C:\\Program Files\\WhatsApp\\WhatsApp.exe\""); 
  
    return 0; 
}