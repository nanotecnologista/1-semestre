#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Programa pra Calcular o quociente e o resto de uma divisão*/

int main ( ) {

	int dn, dv, res, q;

	printf ("\tPara saber o resto e quocioente da divisao, favor informar os valores:\n");
	printf ("Insira o dividendo: \n");
    scanf ("%d", &dn);
    printf ("Insira o divisor: \n");
	scanf ("%d", &dv);
    
	printf ("Calculando... \n"); 
 
	q= dn/dv;
    res= dn%dv;
	
	printf ("O quociente e: %d\n", q);
    printf ("O resto e: %d\n", res);

	system ("PAUSE");
	return (0);
}