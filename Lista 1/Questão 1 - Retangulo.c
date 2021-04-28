#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Programa pra Calcular a area de um retangulo*/

int main ( ) {
	setlocale(LC_ALL,"Portuguese");

	float bs, alt, pt, ar;

	printf ("\tVamos calcular a área do retângulo.\n");
	printf ("Insira a base: \n");
	scanf ("%f", &bs);
	printf ("Insira a altura: \n"); 
	scanf ("%f", &alt);

	printf ("Calculando... \n"); 
 
	pt= 2*(bs+alt);
	ar= bs*alt;
	
	printf ("O perímetro do retângulo é: %.2f\n", pt);
	printf ("A área do retângulo é: %.2f\n", ar);


	system ("PAUSE");
	return (0);
}