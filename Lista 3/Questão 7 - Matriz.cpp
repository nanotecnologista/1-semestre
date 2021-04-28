#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
           
            /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */

      /* Programa Matriz*/

int main ( ){
   int num, i, j, d=0;

   printf ("insira o num:");
   scanf ("%d", &num);

   for (i=1; i<=num; i++){
       for (j=1; j<=i; j++){
          printf ("(teste: i= %d e j= %d)", i, j);
           printf ("%d ", d);
           d++;
           }
           printf ("\n");
           printf ("(teste3: i= %d e j= %d)\n", i, j);  
   }
   printf ("(teste4: i= %d e j= %d)", i, j);

   system ("PAUSE");
	return (0);
}