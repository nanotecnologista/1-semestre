#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Programa pra Calcular a area de um quadrado*/

int main ( ) {
	setlocale(LC_ALL,"Portuguese");

	float lad, pt, ar;

	printf ("\tVamos calcular a área do quadrado.\n");
	printf ("Insira o tamanho do lado do quadrado: \n");
	scanf ("%f", &lad);

	printf ("Calculando... \n"); 
 
	pt= 4*lad;
	ar= lad*lad;
	
	printf ("O perímetro do quadrado é: %.2f\n", pt);
	printf ("A área do quadrado é: %.2f\n", ar);


	system ("PAUSE");
	return (0);
}