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

      /* Programa para mostrar o quadrado do número*/
      
int main ( ) {
	float n1, n2, n3, m;

	printf ("Favor insira suas notas:\n"); 
	scanf ("%f %f %f", &n1, &n2, &n3);

    m= (n1+n2+n3)/3;

    if (m >=5)
    {
        printf ("Aluno Aprovado!\n");
    }else
    {
        printf (" Se ferrou!! Aluno Reprovado!\n");    
    }
    
	system ("PAUSE");
	return (0);
}