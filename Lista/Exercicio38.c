#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Ler uma distância em milhas e apresentá-la convertida em quilômetros. A fórmula de
conversão é: 𝐾 = 1,61 ∗ 𝑀 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas  */

int main()
{
    float milhas, km;
    printf("Digite a distancia em milhas: ");
    scanf("%f", &milhas);
    km = 1.61 * milhas;
    printf("\nA distancia convertida em milhas: %.2f", km);
    return 0;
}

