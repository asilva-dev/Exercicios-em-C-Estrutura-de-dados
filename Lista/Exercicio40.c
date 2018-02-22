#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  Ler um ângulo em graus e apresentá-lo convertido em radianos. A fórmula de conversão é:
𝑅 = 𝐺 ∗ 𝜋/180 , sendo 𝐺 o ângulo em graus e R em radianos e 𝜋 = 3,141592 */
int main()
{
    const double pi = 3.14;
    float graus, r;
    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);
    r = graus * pi/180;
    printf("\nO angulo convertido em radianos eh: %.2f", r);
    return 0;
}

