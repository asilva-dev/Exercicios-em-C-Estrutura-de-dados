#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* . Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Kelvin. A
fórmula de conversão é: 𝐾 = 𝐶 + 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾
atemperatura em Kelvin*/

int main()
{
    float c, k;
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &c);
    k= c + 273.15;
    printf("\nA temperatura em Kelvin eh: %.2f", k);
    return 0;
}

