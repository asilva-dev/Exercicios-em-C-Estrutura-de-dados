#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  Ler um valor de área em metros quadrados 𝑚2e apresentá-lo convertido em acres. A
fórmula de conversão é: 𝐴 = 𝑀 ∗ 0,000247, sendo 𝑀 a área em metros quadrados e 𝐴 a área
em acres  */


int main()
{
    float m2, ac;
    printf("Digite a area em m2: ");
    scanf("%f", &m2);
    ac = m2 * 0.000247;
    printf("\nA area em acres eh: %.2f",ac);
    return 0;
}

