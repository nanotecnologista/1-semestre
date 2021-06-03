#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define COLUNA 3
#define LINHA 3
           
            /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */

      /* Programa para imprimir uma matriz*/
      
      

int main (){

   int matriz[COLUNA][LINHA], i, j, d=3;

   for (i = 0; i < COLUNA; i++){
       for (j = 0; j < LINHA; j++){
           d++;
           matriz[i][j]= d;
           printf ("%02d ", matriz[i][j]);
           //d++;
       }
       d++;
       printf("\n");
   }
   system ("PAUSE");
   return (0);
}