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

      /* Programa para a altura de um prédio pela sombra*/


int main (){
    float sombraPredio, sombraPessoa, alturaPredio, alturaPessoa;
    
    printf ("Qual sua altura em metros? \n");
    scanf ("%f", &alturaPessoa);
    printf ("Qual o tamanho da sua sombra? \n");
    scanf ("%f", &sombraPessoa);
    printf ("Tamanho da sombra do predio: \n");
    scanf ("%f", &sombraPredio);
    
    alturaPredio = (sombraPredio/sombraPessoa) * alturaPessoa;
    printf ("A altura e: %.2f\n", alturaPredio);
   
    system ("PAUSE");
    return (0);

} 