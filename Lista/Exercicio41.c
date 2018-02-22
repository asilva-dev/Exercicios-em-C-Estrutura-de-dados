#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Ler um ângulo em radianos e apresentá-lo convertido em graus. A fórmula de conversão é:
𝐺 = 𝑅 ∗ 180/𝜋 , sendo 𝐺 o ângulo em graus e 𝑅 em radianos e 𝜋 = 3,141592.  */

int main()
{
    const double pi = 3.14;
    float graus, r;
    printf("Digite o valor do angulo em radianos: ");
    scanf("%f", &r);
    graus = r * 180/pi;
    printf("\nO angulo convertido em graus eh: %.2f", graus);
    return 0;
}

