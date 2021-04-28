#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Programa pra Calcular o proximo numero*/

int main ( ) {

    int val;

	printf ("\tMostrarei qual o sucessor do numero que você inserir.\n");
	printf ("Insira a o numero: \n");
	scanf ("%d", &val);
    
	printf ("Calculando... \n"); 
 
	val++;
	
	printf ("O sucessor e: %d\n", val);

	system ("PAUSE");
	return (0);
}