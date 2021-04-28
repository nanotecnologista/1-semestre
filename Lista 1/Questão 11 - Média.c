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

      /* Programa para converter Decimal em binário*/
      
int main ( ) {
	float not1, not2, media1, media2, semestre;

	printf ("Favor inserir os valor das notas das provas do 1 bimestre:\n"); 
	scanf ("%f %f", &not1, &not2);

    media1 =(not1+not2)/2;

    printf ("Favor inserir os valor das notas das provas do 2 bimestre:\n"); 
	scanf ("%f %f", &not1, &not2);
    
    media2 =(not1+not2)/2;
    semestre = (media1+media2)/2;

    printf(" a sua média semestral e: %.2f \n", semestre);

	system ("PAUSE");
	return (0);
}