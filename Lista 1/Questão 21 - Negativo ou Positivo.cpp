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

      /* Programa saber se o número é negativo ou não*/

int main (){

   int n, i;

   printf (" Insira um valor: \n");
   scanf ("%d", &n);

   if (n<0){
       printf ("negativo\n");
   }else{
       printf ("positivo\n");
   }
   system ("PAUSE");
   return (0);

}