#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*   Ler um valor de área em acres e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐴 ∗ 4048,58 , sendo 𝑀 a área em metros quadrados e 𝐴 a área
em acres  */


int main()
{
    float m2, ac;
    printf("Digite a area em acres: ");
    scanf("%f", &ac);
    m2 = ac * 4048.58;
    printf("\nA area em m2 eh: %.2f",m2);
    return 0;
}

