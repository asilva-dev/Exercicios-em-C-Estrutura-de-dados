#include <stdio.h>
#include <stdlib.h>

// Leia quatro notas, calcule a média aritmética e imprima o resultado

int main()
{
    float nota1 = 9.0;
    printf("Nota 1: %.1f", nota1);
    float nota2 = 8.5;
    printf("\nNota 2: %.1f ", nota2);
    float nota3 = 7.0;
    printf("\nNota 3: %.1f ", nota3);
    float nota4 = 6.5;
    printf("\nNota 4: %.1f ", nota4);
    printf("\nA media aritmetica das notas e = %.1f", nota1 + nota2 + nota3 + nota4 / 4);
    printf("\n\n");
    system("pause");
    return 0;
}
