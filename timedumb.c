#include <stdio.h>
#include <stdlib.h>
char ferramenta_rede(char rede){


    switch (rede){
      
        case 'a':
        system ("netstat -a | less");
        break; 
        
        case 'b':
	system ("netstat -at | less");
        break;
        
        case 'c':
        system ("netstat -au | less");
	
        break; 
        
        case 'd':
        system ("netstat -aw | less");
	
        break; 
        
        case 'e':
        system ("netstat -aut | less");
	
        break;
        
        case 'f':
        printf("pressione CRTL+C \n");
        break;

        default:
        
        printf ("erro");
        break; 
         
            
    }
    

}

int main () {
    int e=1;
    char rede;

printf("▄▄▄█████▓ ██▓ ███▄ ▄███▓▓█████    ▓█████▄  █    ██  ███▄ ▄███▓ ▄▄▄▄\n");
printf("▓  ██▒ ▓▒▓██▒▓██▒▀█▀ ██▒▓█   ▀    ▒██▀ ██▌ ██  ▓██▒▓██▒▀█▀ ██▒▓█████▄ \n");
printf("▒ ▓██░ ▒░▒██▒▓██    ▓██░▒███      ░██   █▌▓██  ▒██░▓██    ▓██░▒██▒ ▄██\n");
printf("░ ▓██▓ ░ ░██░▒██    ▒██ ▒▓█  ▄    ░▓█▄   ▌▓▓█  ░██░▒██    ▒██ ▒██░█▀ \n");
printf("  ▒██▒ ░ ░██░▒██▒   ░██▒░▒████▒   ░▒████▓ ▒▒█████▓ ▒██▒   ░██▒░▓█  ▀█▓\n");
printf("  ▒ ░░   ░▓  ░ ▒░   ░  ░░░ ▒░ ░    ▒▒▓  ▒ ░▒▓▒ ▒ ▒ ░ ▒░   ░  ░░▒▓███▀▒\n");
printf("    ░     ▒ ░░  ░      ░ ░ ░  ░    ░ ▒  ▒ ░░▒░ ░ ░ ░  ░      ░▒░▒   ░ \n");
printf("  ░       ▒ ░░      ░      ░       ░ ░  ░  ░░░ ░ ░ ░      ░    ░    ░ \n");
printf("          ░         ░      ░  ░      ░       ░            ░    ░   \n");
printf("                                   ░                                ░ \n");
printf("█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗\n");
printf("╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝ \n");  
printf("Esse Script tem como diretriz ajudar aqueles que não possuem quaisquer conhecimentos,\n");
printf("mas querem mostrar que sabem fazer algo no computador\n");
printf("\n");
printf("█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗\n");
printf("╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝ \n");
printf ("FERRAMENTAS DE REDE\n");
system(" ./menu.sh");
printf ("--selecione uma opção para executar--");
printf("\n");

do{
printf(">>>");
 scanf ("%c", &rede);
 ferramenta_rede(rede); 
    getchar ();
   printf ("\n");
    
    } while (e==1);
  

    return 0;
}