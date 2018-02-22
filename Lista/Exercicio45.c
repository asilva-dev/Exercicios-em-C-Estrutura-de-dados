#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  Ler um valor de volume em litros e apresentá-lo convertido em metros cúbicos 𝑚³. A
fórmula de conversão é: 𝑀 = 𝐿/1000 , sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos. */

int main()
{
    float lt, m3;
    printf("Digite o valor em litros: ");
    scanf("%f", &lt);
    m3 = lt /1000;
    printf("\nO valor convertido em m3: %.2f",m3);
    return 0;
}

