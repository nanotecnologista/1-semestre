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

      /* Média loop, só para com 0*/

int main() {
   int a, b;
   float c;

    while (a>0 && b>0){
        printf ("insira dois valores:\n");
        scanf ("%d %d", &a, &b); 
        c= (a+b)/2;
        printf ("a media e: %.1f\n", c);
    }

system ("PAUSE");
return (0);
}