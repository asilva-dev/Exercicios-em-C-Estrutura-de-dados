#include <stdio.h>
#include <stdlib.h>

/* Leia um valor em real e a cota��o do d�lar. Em seguida, imprima o valor correspondente em
d�lares */


int main()
{
    float real = 14.00;
    printf("Valor em real: R$ %.2f", real);
    float dolar = 3.16;
    printf("\nCotacao em Dolar: R$ %.2f ", dolar);
    printf("\nO valor de real em dolares e = R$ %.2f", real*dolar);
    printf("\n\n");
    system("pause");
    return 0;
}
