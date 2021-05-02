/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor, u, d, c, result;
    printf("Hello World\n");
    printf ("Insira o valor");
    scanf ("%d", &valor);
    
    if (valor/100 > 0){
    u= valor%10;
    d= ((valor%100)/10);
    c= valor/100;
    
    printf (" %d, invertido e: %d%d%d \n",valor, u, d, c);
    
    } else if (((valor%100)/10) > 0){
        d= valor/10;
        u= valor%10;
        printf (" %d, invertido e: %d%d \n",valor, u, d);
    }
    return 0;
}
