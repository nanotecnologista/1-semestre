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

      /* Programa saber o dia da semana*/
      
      

int main (){

   char *dia[7]={"domingo", "segunda", "terca", "quarta", "quinta", "sexta", "sabado"};
   int a;
   
   printf (" Insira o numero do dia da semana: \n");
   scanf ("%d", &a);
   
   if (a>=1 && a<=7)
   printf ("%s", dia[a-1]);
   else 
   printf ("not found: 404 error\n");
   
   system ("PAUSE");
   return (0);

}