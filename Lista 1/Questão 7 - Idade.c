#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/* Programa pra Calcular a idade, meses e dias de alguém*/

int main ( ) {

	int anos, dias, meses;

	printf ("\t Insira os dias: \n");
	scanf ("%d", &dias);
    
	printf ("Calculando... \n"); 
 
	anos = dias/365;
    meses = anos*12;
	
	printf ("Sua idade em anos: %d. Sua idade em meses: %d. Sua idade em dias %d\n", anos, meses, dias);

	system ("PAUSE");
	return (0);
}