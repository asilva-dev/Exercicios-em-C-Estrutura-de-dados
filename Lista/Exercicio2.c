#include <stdio.h>
#include <stdlib.h>
/* Peça ao usuário para digitar três valores inteiros e imprima a soma deles */

int main()
{
    int num1, num2, num3, soma;
    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &num2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &num3);
    soma = num1 + num2 + num3;
    printf("soma = %d", soma);
    printf("\n\n");
    system("pause");
    return 0;
}
