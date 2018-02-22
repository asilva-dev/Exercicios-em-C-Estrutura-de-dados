#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  Ler um valor de comprimento em polegadas e apresentá-lo convertido em centímetros. A
fórmula de conversão é: 𝐶 = 𝑃 ∗ 2,54 , sendo 𝐶 o comprimento em centímetros e 𝑃 o
comprimento em polegadas.*/

int main()
{
    float p, c;
    printf("Digite o valor em polegadas: ");
    scanf("%f", &p);
    c = p * 2.54;
    printf("\nO valor convertido em centimetros eh: %.2fcm", c);
    return 0;
}

