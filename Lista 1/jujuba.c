#include <stdio.h>
#include <stdlib.h>
#include <math.h>
           
            /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */

      // a+b, a+c, b+c
      
int main ( ) {
	float a, b, c;
    int aux = 1;

    while (aux==1)
    {
        printf ("Insira 03 valores:\n"); 
	    scanf ("%f %f %f", &a, &b, &c);

       if (a>c && b>c){
        printf("a soma dos nos numeros maiores e: %.0f", a+b);
    } 
    if (a>b && c>b){
        printf("a soma dos nos numeros maiores e: %.0f", a+c);
    }
    if (b>a && c>a){
       printf("a soma dos nos numeros maiores e: %.0f", c+b);
    }
    if (a==b && b==c)
    {
        printf("Voce inseriu numeros iguais");
    }
    
    printf("\nrepetir? Digite 1 para sim.\n");
    scanf("%d", &aux);
    }
    
    
	system ("PAUSE");
	return (0);
}
