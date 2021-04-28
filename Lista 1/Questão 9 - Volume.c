#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Programa pra calcular o volume de um cilindro*/

int main  ( ) {

	float v, h, r;

	printf ("\t Insira o raio \n");
	scanf ("%f", &r);
    printf ("\t Insira o altura \n");
	scanf ("%f", &h);
    
	printf ("Calculando... \n"); 

	v= 3.14*pow(r,2)*h;

	printf ("O volume e: %.2f\n", v);

	system ("PAUSE");
	return (0);
}