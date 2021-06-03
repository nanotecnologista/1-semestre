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

      /* Programa para converter decimal para binario - ate 5 bits*/

int main (){

   int a, b, c, d, e,x;

   printf (" Insira o numero que 32: \n");
   scanf ("%d", &x);

   if (x<32){
       a= x%2;
       x/=2;
       b= x%2;
       x/=2;
       c= x%2;
       x/=2;
       d= x%2;
       x/=2;
       e= x%2;
       printf ("convertido pra binario e: %d%d%d%d%d\n", x, e, d, c, b, a);
   } else{
       printf ("Voce precisa inserir um valor menor que 32");
   }
   system ("PAUSE");
   return (0);

} 