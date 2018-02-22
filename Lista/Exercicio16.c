#include <stdio.h>
#include <stdlib.h>
/* A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
 O primeiro ganhador receberá 46%;
 O segundo receberá 32%;
 O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores. */

int main()
{
    float valor = 780.000;
    printf("O valor total eh:R$%.3f", valor );
    float gan1, gan2, desc2, gan3, desc3;
    gan1=  valor * 0.46;
    printf("\nPrimeiro ganhador recebe:R$%.3f", gan1);
    gan2=  valor * 0.32;
    printf("\nPrimeiro ganhador recebe:R$%.3f", gan2);
    gan3=  valor * 0.22;
    printf("\nPrimeiro ganhador recebe:R$%.3f", gan3);
    printf("\n\n");
    system("pause");
    return 0;
}
