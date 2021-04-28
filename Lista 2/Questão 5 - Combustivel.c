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

      // Posto de Combustível A <= 25, 2% / A >25 4% || G <=25, 3% / >25, 5%
      
int main ( ) {
	float lt, val;
    int aux =1, x;

    while (aux==1)
    {
        printf ("Digite 1 para Acool ou 2 para Gasolina:\n"); 
	    scanf ("%d", &x);

       if (x == 1){
        printf("Certo. Insira a quantidade de litros:\n");
        scanf ("%f", &lt);

            if (lt <=25){
                val= (lt*2.30);
                val= val - (val*0.02); 
                printf ("O valor e: %.2f\n", val);
                } else{
                    val= (lt*2.30);
                    val= val - (val*0.04);
                    printf ("O valor e: %.2f\n", val);
                }

        }else{
            printf("Certo. Insira a quantidade de litros: \n");
            scanf ("%f", &lt);

            if (lt <=25){
                val= (lt*3.10);
                val= val-(val*0.03);
                printf ("O valor e: %.2f\n", val);
                } else{
                    val= (lt*3.10);
                    val= val-(val*0.05);
                    printf ("O valor e: %.2f\n", val);
                }
        }

    printf("\nrepetir? Digite 1 para sim.\n");
    scanf("%d", &aux);
    }
     
	system ("PAUSE");
	return (0);
}