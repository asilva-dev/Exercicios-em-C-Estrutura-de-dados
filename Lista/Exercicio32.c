#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A
fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,05,0) + 32,0, sendo 𝐹 a temperatura em Fahrenheit e 𝐶 a
temperatura em Celsius*/

int main()
{
    float c, f;
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &c);
    f = c*(9.0/5.0) + 32.0;
    printf("\nA temperatura em Fahrenheit eh: %.2f", f);
    return 0;
}

