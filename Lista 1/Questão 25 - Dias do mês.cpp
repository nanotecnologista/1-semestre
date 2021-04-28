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

   int a, b, c;

   printf (" Insira o numero do mes: \n");
   scanf ("%d", &a);

   if (a<=12){
       if (a==2)
       printf ("28 dias\n");
        else if (a==4 || a==6 || a== 9 || a==11)
         printf ("30 dias\n");
          else
           printf ("31 dias\n");
   }

   system ("PAUSE");
   return (0);

} // 31 = 1, 3, 5,7,8, 9, 10