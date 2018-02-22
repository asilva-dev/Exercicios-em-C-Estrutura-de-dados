#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Ler um valor de comprimento em jardas e apresentá-lo convertido em metros. A fórmula
de conversão é: 𝑀 = 0,91 ∗ 𝐽 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros.  */


int main()
{
    float jd, mt ;
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &jd);
    mt = 0.91 * jd;
    printf("\nO comprimento convertido em metros: %.2f",mt);
    return 0;
}

