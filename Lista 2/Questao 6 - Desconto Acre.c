/******************************************************************************

6. Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de pulverização 
dependem do tipo de praga e da área a ser contratada conforme a tabela: 
• Tipo 1 – ervas daninhas R$ 50,00 por acre; 
• Tipo 2 – gafanhotos R$ 100,00 por acre; 
• Tipo 3 – broca R$ 150,00 por acre; 
• Tipo 4 – todos acima R$ 250,00 por acre. 
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 5%. Em adição, 
qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um desconto de 10% sobre o valor que 
ultrapassar os R$ 750,00. Caso ambos os descontos se apliquem, o da área é calculado antes. Fazer um 
programa que leia: o tipo de pulverização (1 a 4) e área a ser pulverizada; e imprima o valor a ser 
pago.

*******************************************************************************/

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
    
   int t; 
   float valor, a, d1, d2;
   
   printf ("Tipo 1 – ervas daninhas R$ 50,00 por acre\nTipo 2 – gafanhotos R$ 100,00 por acre\n");
   printf ("Tipo 3 – broca R$ 150,00 por acre\nTipo 4 – todos acima R$ 250,00 por acre\n");
   scanf ("%d", &t);
   printf ("Quantos acres?\n");
   scanf ("%f", &a);
   
   
   if (t == 1){
       valor= a*50;
       printf ("valor inicial: %.2f \n", valor);
   }else if (t == 2){
       valor= a*100;
       printf ("valor inicial: %.2f \n", valor);
   } else if (t == 3){
       valor= a*150;
       printf ("valor inicial: %.2f \n", valor);
   } else if (t == 4){
       valor= a*200;
       printf ("valor inicial: %.2f \n", valor);
   }
   
   if (a>=1000){
       d1= valor-(valor*0.05);
       d2= valor-((d1 -750)*0.1);
       printf ("valor valor inicial: %.2f \n", d2);
       
   } else if (valor>750 && a<1000){
       d1= valor-((valor-750)*0.1);
       printf ("valor final com desconto: %.2f \n", d1);
   }
       
   system ("PAUSE");
   return (0);

}