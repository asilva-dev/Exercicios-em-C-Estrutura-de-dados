#include <stdio.h>
#include <stdlib.h>

/* Leia o valor do raio de um círculo e calcule a área do círculo correspondente. Imprima o
resultado dessa operação. A área do círculo é 𝜋 ∗ 𝑟𝑎𝑖𝑜², considere 𝜋 = 3,141592 */


int main()
{
    int raio = 12;
    float raioquadrado = raio * raio;
    printf("O valor do raio do circulo e:%d" , raio);
    printf("\nA area do circulo e: %.2f " , 3.14* raioquadrado);
    printf("\n\n");
    system("pause");
    return 0;
}
