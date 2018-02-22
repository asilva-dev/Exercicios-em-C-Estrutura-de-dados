#include <stdio.h>
#include <stdlib.h>
/* Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir
de sua idade e do ano atual */

int main()
{
    int idade, ano_atual, ano_nasc;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Insira em que ano estamos: ");
    scanf("%d", &ano_atual);
    ano_nasc = ano_atual - idade;
    printf("Voce nasceu em: %d", ano_nasc);
    printf("\n");
    system("pause");
    return 0;
}

