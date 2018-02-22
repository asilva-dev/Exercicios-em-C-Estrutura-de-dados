#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Escreva um programa que leia as coordenadas 𝑥 e 𝑦 de pontos no plano cartesiano e
calcule sua distância da origem (0, 0)*/

int main()
{
    float x = 0;
    float y = 0;
    float R = 0;
    printf ("Digite a coordenada x \n");
    scanf ("%f", &x);
    printf ("Digite a coordenada y \n");
    scanf ("%f", &y);
    R=sqrt(pow(x,2)+pow(y,2)); //pow(base, expoente) pra elevar ao quadrado e sqrt() é raíz quadrada
    printf("A distancia e: %f \n", R);
    fflush(stdin);
    getchar();
    return 0;
}

