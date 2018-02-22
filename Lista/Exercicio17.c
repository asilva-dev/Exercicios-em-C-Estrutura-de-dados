#include <stdio.h>
#include <stdlib.h>
/* Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.
 */

int main()
{
    float dias;
    printf("\nQuantos dias o encanador trabalhou? ");
    scanf("%f" , &dias);
    float sal = 30.00;
    float ir, salfinal;
    ir = sal * 0.08;
    salfinal = sal - ir;
    printf("\nO encanador recebera: R$%.2f" , salfinal * dias);
    printf("\n\n");
    system("pause");
    return 0;
}
