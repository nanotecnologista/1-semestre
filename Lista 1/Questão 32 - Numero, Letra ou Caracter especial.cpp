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

      /* Queria fazer uma lógica melhor*/
      /* 32. Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número 
       ou um símbolo (qualquer outro caracter, que não uma letra ou número)*/

int main() {
   char n;

      printf (" Insira um valor:\n");
      scanf ("%c", &n);
      
      printf ("C %c\n", n); 
      printf ("d %d\n", n);

      if (n>=48 && n<=57){
         printf ("voce inseriu um numero.\n");

      } else if ((n>= 65 && n<=90) || (n>=97 && n<=122)){

            if (n==65 || n==69 || n==73 || n==79 || n==85 || n==97 || n==101 || n==105 || n==111 || n==117){
               printf ("voce inseriu uma vogal\n");
            } else {
               printf ("voce inseriu uma consoante\n");
            }
      } else {
         printf ("voce inseriu um caracter especial\n");
      }
     // printf ("f %f\n", n);
    //  printf ("S: %s\n", n);


//system ("PAUSE");
return (0);
}
