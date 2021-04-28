#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Programa pra Calcular a perimetro de um triangulo*/

int main ( ) {

	float l1, l2, l3, pt;

	printf ("\tVamos calcular o perimetro do triangulo.\n");
	printf ("Insira a os seus lados: \n");
	scanf ("%f %f %f", &l1, &l2, &l3);
    
	printf ("Calculando... \n"); 
 
	pt= l1+l2+l3;
	
	printf ("O perímetro triangulo é: %.2f\n", pt);

	system ("PAUSE");
	return (0);
}