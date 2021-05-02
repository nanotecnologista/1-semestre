/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cem, cinquenta, vinte, dez, cinco, dois, um, valor; 
    
    printf("Insira o valor do saque:\n");
    scanf ("%d", &valor);
    
    cem= valor/100;
    cinquenta= (valor%100)/50;
    vinte= ((valor%100)%50)/20;
    dez= (((valor%100)%50)%20)/10;
    cinco= ((((valor%100)%50)%20)%10)/5;
    dois= (((((valor%100)%50)%20)%10)%5)/2;
    um= ((((((valor%100)%50)%20)%10)%5)%2)/1;
    
    printf (" valor em notas de 100= %d \n", cem);
    printf (" valor em notas de 50= %d \n", cinquenta);
    printf (" valor em notas de 20= %d \n", vinte);
    printf (" valor em notas de 10= %d \n", dez);
    printf (" valor em notas de 05= %d \n", cinco);
    printf (" valor em notas de 02= %d \n", dois);
    printf (" valor em notas de 01= %d \n", um);
    

    return 0;
}
