#include <stdio.h>
#include <stdlib.h>
#include <string.h>
           
            /*             _
                         / /
               __   __  '-'__  ___     ___
              |  | |  |   |  ||   |   |   |
              |  | |  |   |  ||   |___|   |
         __   |  | |  |   |  ||   '___'   |
        |  |__|  | |   ---   ||   |   |   | 
         \__ __ _|  \_______/ '___'   '___' */

      /* Programa para calcular a resistência equivalente de 2 circuitos*/
      
int main ( ) {
	char letra;

	printf ("Digite uma letra qualquer:\n"); 
	scanf ("%c", &letra);
   //letra = toupper(letra);

    if (letra =='a'|| letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A'|| letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf ("voce inseriu uma vogal\n");
    }else{
        printf ("voce inseriu uma consoante\n");
    }
    
	system ("PAUSE");
	return (0);
}