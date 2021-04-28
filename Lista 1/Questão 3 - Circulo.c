#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Programa pra Calcular a area de um círculo*/

int main ( ) {
	setlocale(LC_ALL,"Portuguese");

	float r, pt, ar;

	printf ("\tVamos calcular a area e o perimetro do circulo.\n");
	printf ("Insira a raio: \n");
	scanf ("%f", &r);
	
	printf ("Calculando... \n"); 
 
	pt= 2*3.14*r;
	ar= 3.14* pow(r,2);
	
	printf ("O perímetro circulo é: %.2f\n", pt);
	printf ("A área do circulo é: %.2f\n", ar);


	system ("PAUSE");
	return (0);
}