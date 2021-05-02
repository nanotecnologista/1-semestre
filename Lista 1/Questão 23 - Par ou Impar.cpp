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

      /* Programa saber se o número é ímpar ou par*/

int main (){

   int n, m;

   printf (" Insira um valor: \n");
   scanf ("%d", &n);

   if (n %2 ==0){
       printf ("e par.\n");
   }else{
       printf ("e impar.\n");
   }
   system ("PAUSE");
   return (0);

}