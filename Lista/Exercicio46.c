#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*   Ler um valor de massa em quilogramas e apresentá-lo convertido em libras. A fórmula de
conversão é: 𝐿 = 𝐾/0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras */


int main()
{
    float kg, lb;
    printf("Digite massa em kg: ");
    scanf("%f", &kg);
    lb = kg /0.45;
    printf("\nO valor convertido em libras: %.2f",lb);
    return 0;
}

