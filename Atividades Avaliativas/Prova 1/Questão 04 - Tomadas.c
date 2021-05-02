#include <stdio.h>
    
// Crie um programa para identificaa quantidade de tomadas que pode ter um saguão
// Determine o numero maximo de tomada
//Sao quatro reguas de tomada
// Usuario diz a quantidadede tomada na reguas
// Pode usar uma tomada da reguapara ligar outra tomada

int main()
{
     int t1, t2, t3, t4, total;

    printf("Quantidade de tomada da regua 1: ");
     scanf("%d",&t1);
    printf("Quantidade de tomada da regua 2: ");
     scanf("%d",&t2);
    printf("Quantidade de tomada da regua 3: ");
     scanf("%d",&t3);
    printf("Quantidade de tomada da regua 4: ");
     scanf("%d", &t4);
     
     total = (t1+t2+t3+t4)-3;
     
     printf ("A capacidade maxima de tomadas e: %d", total);

    return 0;
}
