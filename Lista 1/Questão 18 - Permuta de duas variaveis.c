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

      /* Permuta entre valores de duas variaveis inteiras*/


int main (){
    int x, y, z;

    printf ("Insira 2 valores inteiros x e y: \n");
    scanf ("%d %d", &x, &y);
    
    z=x;
    x=y;
    y=z;
    
    printf ("agora x e: %d e y e: %d.\n", x, y);

    system ("PAUSE");
    return (0);

} 