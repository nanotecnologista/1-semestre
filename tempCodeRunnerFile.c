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

      /* 24. Escreva um programa que leia três números e mostre o maior entre eles.*/


int main (){

    float a, b, c;

    printf ("Insira 3 valores: \n");
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);
    
    if ((a>=b) && (b>=c)){
        printf ("Os maiores valores sao: %f e %f \n", a, b);
    }
    if ((a>=c) && (c>=b)){
        printf ("Os maiores valores sao: %f e %f \n", a, c);
    }
    if ((b>=a) && (c>=a)){
        printf ("Os maiores valores sao: %f e %f \n", b, c);
    }
    system ("PAUSE");
    return (0);

}