#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ( ) {
	setlocale(LC_ALL,"Portuguese");

	int fatorial, valor ;
    valor = 1;

	printf ("Vamos calcular o valor do fatorial:\n");
	printf ("Favor inserir um valor positivo:\n"); 
	scanf ("%d", &fatorial);
	
	if (fatorial == 0)
	{
		printf ("0! = 1 \n");
	}else
	{
		for ( ; fatorial >=1; fatorial--) 
		{
			/*o que acontece quando eu faço o fatorial de um número?
			Basicamente, eu multiplico o número atual pelo anterior*/

			valor *= fatorial;
		}
		printf ("O valor é: %d\n", valor);
	}
	
	system ("PAUSE");
	return (0);
}