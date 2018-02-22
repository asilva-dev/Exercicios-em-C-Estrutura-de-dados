#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Ler uma velocidade em 𝑚/𝑠 (metros por segundo) e apresentá-la convertida em
𝐾𝑚/ℎ (quilômetros por hora). A fórmula de conversão é: 𝐾 = 𝑀 ∗ 3,6 , sendo 𝐾 a velocidade
em 𝑘𝑚/ℎ e 𝑀 em 𝑚/𝑠. */

int main()
{
    float ms, kmh;
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);
    kmh = ms *3.6;
    printf("\nA velocidade convertida em km/h eh: %.2f", kmh);
    return 0;
}

