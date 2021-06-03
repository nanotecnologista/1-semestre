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

      /* Programa para converter decimal para binario - ate 5 bits*/


// Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre 
// (fica verde), os veículos que nele estavam parados tendem a encontrar os próximos 
// semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam 
// abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre 
// eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade 
// permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para 
// percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir 
// um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um 
// algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes 
// informações: 
// a. a distância desde o semáforo anterior
// b. a velocidade permitida da via
// c. a aceleração típica dos carros

int main (){
    float distancia, distanciaP, velocidade, aceleracao, tempo2, tempo;
    
    printf ("Qual a distancia dos semaforos: \n");
    scanf ("%f", &distancia);
    printf ("Qual a velocidade permitida: \n");
    scanf ("%f", &velocidade);
    printf ("Qual a aceleracao: \n");
    scanf ("%f", &aceleracao);
    
    velocidade /= 3.6;
    tempo = velocidade/aceleracao;
    distanciaP = 0.5*(aceleracao)*(tempo*tempo);
    tempo2 = (distancia - distanciaP)/velocidade;
    tempo += tempo2;
    printf ("%.f\n", tempo);
   


    system ("PAUSE");
    return (0);

} 