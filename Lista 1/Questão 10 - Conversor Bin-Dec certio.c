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
	int dec, i; 
    int bin[5];

	printf ("Favor inserir um valor < 32:\n"); 
	scanf ("%d", &dec);
	
	if (dec >= 32)
	{
		printf ("Voce inseriu um numero maior");
	}else
	{
		for (i= 5;  i>=0; i--){
               int aux = 0;
               aux = dec % 2;
            if (aux == 0){
                bin[i] = 0;
            }else{
                bin[i] = 1;
            }

            dec = dec /2; 
            printf ("%d", bin[i]);
        }
	}
    
    printf("\n");

    for (i= 0; i <=5; i++){

        printf ("%d", bin[i]);
        }

    printf("\n");

	system ("PAUSE");
	return (0);
}