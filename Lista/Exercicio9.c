#include <stdio.h>
#include <stdlib.h>

/* Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro */


int main()
{
    int num = 5;
    printf("Numero inteiro: %d" , num);
    printf("\nSoma do do sucessor de seu triplo com o antecessor de seu dobro : %d ", num * 3 + 1 + num * 2 -1);
    printf("\n\n");
    system("pause");
    return 0;
}
