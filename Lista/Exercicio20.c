#include <stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um
valor total lido, mostre:
 O total a pagar com desconto de 10%;
 O valor de cada parcela, no parcelamento de 3 x sem juros;
 A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
 A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)
 */
int main()
{
    float vlrtot;

    printf("Qual o valor total? ");
    scanf("%f", &vlrtot);

    float des10, vlrapagar;
    des10 = vlrtot * 0.10;
    vlrapagar = vlrtot - des10;
    printf("\nTotal a pagar com desconto de 10%: R$%.2f" , vlrapagar);
    float parc3;
    parc3= vlrtot / 3;
    printf("\nTotal do parcelamento em 3x sem juros: R$%.2f", parc3);
    float comissao;
    comissao= vlrapagar * 0.05;
    printf("\nComissao venda a vista: R$%.2f", comissao);
    float comissao2;
    comissao2= vlrtot * 0.05;
    printf("\nComissao venda parcelada: R$%.2f", comissao2);
    printf("\n\n");
    system("pause");
    return 0;
}
