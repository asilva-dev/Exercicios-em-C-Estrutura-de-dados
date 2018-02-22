#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  Ler um valor de comprimento em centímetros e apresentá-lo convertido em polegadas. A
fórmula de conversão é: 𝑃 = 𝐶/2,54 , sendo 𝐶 o comprimento em centímetros e 𝑃 o
comprimento em polegadas..*/

int main()
{
    float p, c;
    printf("Digite o valor em centimetros: ");
    scanf("%f", &c);
    p = c / 2.54;
    printf("\nO valor convertido em polegadas eh: %.2f", p);
    return 0;
}

