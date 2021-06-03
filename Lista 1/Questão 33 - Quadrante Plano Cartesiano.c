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

      /* Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).*/


int main (){
    int x, y;
    
    printf ("Insira o valor de x:\n");
    scanf ("%d", &x);
    printf ("Insira o valor de y:\n");
    scanf ("%d", &y);

    if (x==0 && y==0){
        printf ("Esta na origem\n");
    }
        else if (x<=0 && y<=0){
            printf ("3 quadrante");
        }
            else if (x<=0 && y>=0){
                printf ("2 quadrante");
            }
                else if (x>=0 && y>=0){
                    printf ("1 quadrante");
                }
                  else if (x>=0 && y<=0){
                        printf ("4 quadrante");
                    }




    system ("PAUSE");
    return (0);

} 