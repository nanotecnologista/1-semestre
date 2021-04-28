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

      /* Programa para mostrar o quadrado do número*/
      
int main ( ) {
	int num;

	printf ("Favor inserir um valor:\n"); 
	scanf ("%d", &num);

    printf ("O quadrado e: %d \n", (num*num));
    
	system ("PAUSE");
	return (0);
}