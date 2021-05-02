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

      /* Programa calcular o módulo do número*/

int main (){

   int n, m;

   printf (" Insira um valor: \n");
   scanf ("%d", &n);

   if (n<=0){
       m= (n)*(-1);
       printf ("Modulo e %d\n", m);
   }else{
       printf ("Modulo e: %d\n", n);
   }
   system ("PAUSE");
   return (0);

}