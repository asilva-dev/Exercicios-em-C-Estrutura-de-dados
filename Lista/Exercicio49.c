#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  Ler um valor de comprimento em metros e apresentá-lo convertido em jardas. A fórmula
de conversão é: 𝐽 = 𝑀/0,91 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros  */


int main()
{
    float jd, mt ;
    printf("Digite o comprimento em metros: ");
    scanf("%f", &mt);
    jd = mt /0.91;
    printf("\nO comprimento convertido em jardas: %.2f",jd);
    return 0;
}

