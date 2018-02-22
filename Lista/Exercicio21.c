#include <stdio.h>
#include <stdlib.h>
/* Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo,
sem se preocupar com a altura do usuário */

int main()
{
    float degrau, altura, qtd;
    printf("Insira a altura do degrau em centimetros: ");
    scanf("%f", &degrau);
    printf("Qual altura deseja alcancar em metros:");
    scanf("%f", &altura);
    qtd =  (degrau*100) / altura;
    printf("\nA quantidade de degraus para alcancar a altura eh:%.0f" , qtd);
    return 0;
}
