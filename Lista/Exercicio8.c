#include <stdio.h>
#include <stdlib.h>

// Leia um número inteiro e imprima o seu antecessor e o seu sucessor


int main()
{
    int num = 5;
    printf("Numero inteiro: %d" , num);
    printf("\nAntecessor do numero: %d ",num - 1);
    printf("\nSucessor do numero: %d ",num + 1);
    printf("\n\n");
    system("pause");
    return 0;
}
