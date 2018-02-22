#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 𝐾 − 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾 a
temperatura em Kelvin*/

int main()
{
    float k, c;
    printf("Digite a temperatura em Graus Kelvin: ");
    scanf("%.2f", &k);
    c = k - 273.15;
    printf("A temperatura em Celsius eh: %.2f", c);
    return 0;
}

