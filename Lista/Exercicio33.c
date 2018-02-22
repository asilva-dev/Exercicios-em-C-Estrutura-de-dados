#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 5,0 ∗ (𝐹 − 32,0)/9,0, sendo 𝐶 a temperatura em Celsius e 𝐹 a
temperatura em Fahrenheit.*/

int main()
{
    float f, c;
    printf("Digite a temperatura em Graus Fahrenheit: ");
    scanf("%f", &f);
    c = 5.0*(f -32.0)/9.0;
    printf("A temperatura em Celsius eh: %.2f", c);
    return 0;
}

