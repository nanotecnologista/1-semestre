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

      /* Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366
dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos.
Escreva um programa que verifique se um ano é bissexto. Um ano é bissexto se ele é
divisível por 4. Entretanto, se o ano é divisível por 100, ele não é bissexto. Mas, se ele for 
divisível por 400, ele volta a ser bissexto.
a. São bissextos os anos: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800, ...
b. Não são bissextos: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038, ...*/


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