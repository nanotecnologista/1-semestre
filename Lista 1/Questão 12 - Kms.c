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

      /* Programa para converter Decimal em binário*/
      
int main ( ) {
	float ms, km;

	printf ("Favor inserir o m/s\n"); 
	scanf ("%f", &ms);

    km= ms*3.6;

    printf ("O valor em Km/h e: %.2f\n", km);
    
	system ("PAUSE");
	return (0);
}