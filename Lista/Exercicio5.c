#include <stdio.h>
#include <stdlib.h>
/*  Efetue a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos */

int main()
{
    int num1 = 6;
    int num2 = 3;
    int num3 = 9;
    printf("Numero 1: %d " , num1);
    printf("\nNumero 2: %d " , num2);
    printf("\nNumero 3: %d" , num3);
    printf("\nA soma dos quadrados dos numeros lidos e = %d", num1*num1 + num2*num2 + num3*num3);
    printf("\n\n");
    system("pause");
    return 0;
}
