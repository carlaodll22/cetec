#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/**********************************************************************************************************
* Crie um algoritmo que calcule o sal�rio l�quido  de 10 funcion�rios sabendo que: A cada um dependente,  *
* este recebe R$300,00 de b�nus; O valor do seu sal�rio bruto �: Valor Hora * Horas Trabalhadas no M�s;   *
* A aplica��o ir� coletar o n�mero de Dependentes, Valor Hora, Hora Trabalhada e apresentar� o Valor Bruto* 
* e Valor Liquido.																						  *
*         																								  *
* Paloma Rangel - Noite - Info1                                                                     	  *
***********************************************************************************************************/ 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	int  cont = 1, depend;
	float salarioL, salarioB, valorhora, horasT, valorD;
	
	do  {

		printf ("\t- %d", cont);
		cont++;
		printf ("\nDigite o n�mero de dependentes:\n");
		scanf ("%d", &depend);
		printf ("Digite a quantidade de horas trabalhadas:\n");
		scanf ("%f", &horasT);
		printf ("Digite o valor por hora:\n");
		scanf ("%f", &valorhora);
		
		valorD = 300 * depend;
		
		salarioB = valorhora * horasT;
		
		salarioL = valorD + salarioB;
		
		printf ("\n\t-Sal�rio bruto:R$%.2f\n", salarioB);
		printf ("\n\n\t-Sal�rio l�quido: R$%.2f\n", salarioL);
		printf ("\n\n");
		system ("pause");
		system ("cls");
	    } 
	while (cont<=10);
	
	 
	return 0;
}
