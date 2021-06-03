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

      /* Agora está melhor, obrigada Ruvian*/

int main() {
   int i, n, aux;

      printf (" Insira um valor:\n");
      scanf ("%d", &n);
      do{
         printf ("O quadrado do %d numero e: %d\n", n, (n*n));
         printf ("O cubo e: %.0f\n", pow(n, 3));
         printf ("A raiz do e: %.2f\n\n", sqrt(n));

         printf ("Para fazer uma nova op. Digite um novo numero ou digite 0 para encerrar:\n");
         scanf("%d", &n);
      }while (n); // mesmo que n!=0
      


system ("PAUSE");
return (0);
}
