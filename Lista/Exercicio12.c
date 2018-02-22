#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Sejam 𝑎 e 𝑏 os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + 𝑏2. Faça um programa que receba os valores de 𝑎 e 𝑏 e encontre o
valor da hipotenusa através da equação. Imprima no final o resultado dessa operação. */

int main()
{
    int num1, num2, num3;
    float hipotenusa;
    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &num2);
    hipotenusa = sqrt((num1* num1) + (num2* num2));
    printf("A hipotenusa dos valores eh = %.2f", hipotenusa);
    printf("\n\n");
    system("pause");
    return 0;
}
