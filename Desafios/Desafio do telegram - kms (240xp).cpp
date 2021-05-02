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

      /* #Desafio km*/
      
      

int main (){

   float km, valor;
   
   printf (" Qual dist. vai percorrer? \n");
   scanf ("%f", &km);
   
   if (km<200){
       valor= km*0.50;
       printf ("O valor cobrado sera %.2f \n", valor);
   }else{
       valor= km*0.45;
       printf ("O valor cobrado sera %.2f \n", valor);
   }

   system ("PAUSE");
   return (0);

}