#include <stdio.h>
#include <stdlib.h>
/*  Fa�a um programa que leia o valor da hora de trabalho (em reais) e n�mero de horas
trabalhadas no m�s, e imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre o
valor calculado */

int main()
{
    float horadia = 5.50;
    printf("Voce recebe por hora: R$%.2f", horadia);
    float horames;
    printf("\nQuantas horas voce trabalhou esse mes: ");
    scanf("%f", &horames);
    float hrstrab = horadia * horames;
    float bonus, salfim;
    bonus = hrstrab * 0.10;
    salfim = hrstrab + bonus;
    printf("Voce recebera esse mes: R$%.2f", salfim);
    printf("\n\n");
    system("pause");
    return 0;
}
