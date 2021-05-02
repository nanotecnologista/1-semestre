#include <stdio.h>
#include <stdlib.h>
#include <math.h>
           
            /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */

      /* Programa para calcular a resisência equivalente*/
      
int main ( ) {
	float req, r1, r2, r3;

	printf ("Favor inserir o valor de R1 e R2 e R3:\n"); 
	scanf ("%f %f %f", &r1, &r2, &r3);

    req= ((r1*r2)/(r1/r2))+r3;

    printf ("O valor e: %.2f\n", req);
    
	system ("PAUSE");
	return (0);
}