#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* Programa pra Calcular a temperatura*/

double main ( ) {

	float fh, c;

	printf ("\t Insira a temperatura: \n");
	scanf ("%f", &fh);
    
	printf ("Calculando... \n"); 

	c= 9/5*(fh-32);
	
	printf ("A Temperatura em Celsius e: %f\n", c);

	system ("PAUSE");
	return (0);
}

int main ( ) {

	float fh, c;

	printf ("\t Insira a temperatura: \n");
	scanf ("%f", &fh);
    
	printf ("Calculando... \n"); 

	c= 9/5*(fh-32);
	
	printf ("A Temperatura em Celsius e: %.2f\n", c);

	system ("PAUSE");
	return (0);
}