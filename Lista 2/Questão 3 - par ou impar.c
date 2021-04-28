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

      /* Programa para definir se o numero é par ou impar*/
      
int main ( ) {
	int num;

	printf ("Insira um valor:\n"); 
	scanf ("%d", &num);
    
    if (num %2 == 0){
        printf ("O numero que voce inseriu e par\n");
    } else {
           printf ("O numero que voce inseriu e impar \n");
    }
	system ("PAUSE");
	return (0);
}