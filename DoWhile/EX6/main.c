#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	system ("color 4f");
	setlocale (LC_ALL,"portuguese");
	int opcao;
	system ("color f4");
	printf ("Bem-vindo ao McDonalds. \n"); 
	printf ("\nEsse � o nosso menu:\n");
	printf ("\n1 -\tBigmac\n");
	printf ("2 -\tQuarteir�o\n");
	printf ("3 -\tMacChicken\n");
	printf ("4 -\tCheddar MacMelt\n");
	printf ("5 -\tMacMax\n"); 
    printf ("\n\nDigite sua op��o:  ");
    scanf ("%d", &opcao);
    
    switch (opcao) {
        case 1:
        system ("color 6f");	
        printf ("\nOp��o n�mero: %d, o BigMac! �tima escolha, sabia que na Fran�a eles chamam de Le BigMac?\n\n", opcao);	
        break;

	    case 2: 
	    system ("color 6f");	
        printf ("\nOp��o n�mero: %d, o Quarteir�o! �tima escolha, sabia que na Fran�a eles chamam de Royal with Cheese?", opcao);	
	    break;
	    
	    case 3: 
	    system ("color 6f");	
        printf ("\nOp��o n�mero: %d, o MacChiken! �tima escolha e bom apetite.", opcao);	
        
	    case 4:
	    system ("color 6f");	
        printf ("\nOp��o n�mero: %d, o Cheddar MacMelt! �tima escolha e bom apetite.", opcao);	
        break;
        
	    case 5:
	    system ("color 6f");	
        printf ("\nOp��o n�mero: %d, o MacMax! �tima escolha e bom apetite.", opcao);	
        break;
        
        default:
        system ("color 4f");	
	    printf ("\nOp��o \"%d\" inv�lida.\n", opcao);
		break;
    }
      
	return 0;
}
