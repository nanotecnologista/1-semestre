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

      /* Programa para saber se o numero e divisivel por 2,5,10*/
      
int main ( ) {
	int num;

	printf ("Favor inserir um valor:\n"); 
	scanf ("%d", &num);

    if (num %2 == 0) {
        printf ("O numero e divisivel por dois.\n");
    
        if (num %5 == 0) {
            printf ("O numero e divisivel por cinco.\n");

        }
            if (num %10 == 0) {
                printf ("O numero e divisivel por dez.\n");

            }

    } else{
        printf ("O numero nao e divisivel por dois, cinco ou dez: %d \n", num);
        }
    
	system ("PAUSE");
	return (0);
}