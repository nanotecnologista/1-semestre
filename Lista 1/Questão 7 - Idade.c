#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/* Programa pra Calcular a idade, meses e dias de alguém*/
// ps: Essa questão é mó chatinha, fiz essa poha simplificada. 

int main ( ) {

	int anos, dias, meses;

	printf ("\t Insira os dias: \n");
	scanf ("%d", &dias);
    
	printf ("Calculando... \n"); 
 
	anos = dias/365;
    meses= dias%365/30;
	dias=  dias%365%30/7; 
	
	printf ("Sua idade em anos: %d. Sua idade em meses: %d. Sua idade em dias %d\n", anos, meses, dias);

	system ("PAUSE");
	return (0);
}