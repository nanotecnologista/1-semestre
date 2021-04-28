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

      /* Programa: função do segundo grau - determinando o delta*/
      
int main ( ) {
	int a, b, c;
    float d, x1, x2;

	printf ("Favor inserir, respectivamente, o valor de a, b e c: \n"); 
	scanf ("%d %d %d", &a, &b, &c);

    d= (b*b) -4*a*c;

    printf ("%.2f\n", d);

    if (d >0){

        x1= (-b +sqrt(d))/2*a;
        x2= (-b -sqrt(d))/2*a;
        printf ("As raizes sao: %.2f e %.2f\n", x1, x2);

        if(d==0){
            x1= (-b +sqrt(d))/2*a;
            printf ("As unica raiz existente e: %.2f\n", x1);
        }

    }else{
        printf ("Não existem raízes reais!\n");    
    }
    
	system ("PAUSE");
	return (0);
}