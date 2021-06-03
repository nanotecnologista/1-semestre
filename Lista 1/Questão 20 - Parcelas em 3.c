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

      /* Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada
maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores
possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas
prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de
R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de
acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é
que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações.
*/


int main (){

    float valor, moedas=0;
    int entrada, parcela, auxiliar;

    printf ("Insira o valor do produto: \n");
    scanf ("%f", &valor);
    auxiliar = valor;
    moedas = valor - auxiliar;
    entrada = auxiliar/3;
    parcela = entrada;
    valor = entrada + (auxiliar%3 + moedas);
    
    printf ("valor entrada %.2f.\nvalor das parcelas %d \n", valor, parcela);

    system ("PAUSE");
    return (0);

}