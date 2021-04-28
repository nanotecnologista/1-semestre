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

      /* Ficou uma droga*/

int main() {
   int i, n[3], aux[3];

      printf (" Insira 3 valores:\n");
      for (i = 0; i < 3; i++){
         scanf ("%d", &n[i]);
      }

         for (i = 0; i < 3; i++){
             printf ("O quadrado do %d numero e: %d\n", n[i], (n[i]* n[i]));

             aux[i]= pow (n[i], 3);
             printf ("O cubo do %d numero e: %d\n", n[i], aux[i]);

             aux[i]= sqrt (n[i]);
             printf ("A raiz do %d numero e: %d\n\n", n[i], aux[i]);
      }

system ("PAUSE");
return (0);
}
