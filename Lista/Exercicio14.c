#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que possa entrar com o valor de um produto e imprima o valor tendo
em vista que o desconto foi de 12% */

int main()
{
    float valor, desconto, vfinal;
    printf("Digite o preco do produto:");
    scanf("%f" , &valor);
    desconto =  valor * 0.12;
    vfinal = valor - desconto;
    printf("\nO valor com desconto eh: %.2f" ,vfinal);


    printf("\n\n");
    system("pause");
    return 0;
}
