#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  Faça um programa para ler as dimensões de um terreno (comprimento 𝑐 e largura 𝑙), bem
como o preço do metro do arame 𝑝, então fornecer como saída o custo para cercar este
mesmo terreno*/

int main()
{
    float largura, comprimento, preco, total;
    printf("\nQual a largura do terreno: ");
    scanf("%f", &largura);
    printf("\nQual o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("\nQual o preco do terreno: R$");
    scanf("%f", &preco);
    total = (comprimento * largura * preco);
    printf("\nVoce gastara para cercar o terreno: R$%.2f", total);
    return 0;
}

