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

      /* Programa escrever por extenso de 0 a 100*/


char *unidades[] = {"zero","um","dois","tres","quatro",
"cinco","seis","sete","oito","nove"};

char *dezVinte[] = {"","onze","doze","treze","quatorze",
"quinze","dezesseis","dezessete","dezoito","dezenove"};

char *dezenas[] = {"","dez","vinte", "trinta","quarenta",
"cinquenta","sessenta","setenta","oitenta","noventa", "cem"};
      
int main ( ) {
    int num, i, aux = 0;


    while (aux== 0) {
    printf("digite um numero: \n");
    scanf ("%d", &num);
    for (i = 0; num < 101; i++)
    {
    
    if (num <= 9){
        printf ("%s \n", unidades[num]);
    }
       else if (num %10 == 0){
           printf ("%s \n", dezenas[num/10]);            
        }    
           else if (num <= 19){
               printf ("%s \n", dezVinte[num-10]);
            }
                else if (num <=99){
                    printf ("%s e %s \n ", dezenas[num/10], unidades[num-((num/10)*10)]); 
                } 
    num++;
    if (num>100)
    {
        aux++;
    }
    }
    //printf ("repetir?");
   // scanf ("%d", &aux);
    }

	system ("PAUSE");
	return (0);
}