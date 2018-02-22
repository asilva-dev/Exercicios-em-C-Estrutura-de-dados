#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Ler um valor de volume em metros cúbicos 𝑚³ e apresentá-lo convertido em litros. A
fórmula de conversão é: 𝐿 = 1000 ∗ 𝑀, sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos*/

int main()
{
    float mc, lt;
    printf("Digite o volume em m3: ");
    scanf("%f", &mc);
    lt = 1000 * mc;
    printf("\nO valor convertido em litros eh: %.2f", lt);
    return 0;
}

