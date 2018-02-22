#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*  Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII. */
int main(void){
    char letra;
    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);
    letra = toupper(letra);
    printf("\nLetra em maiusculo: %c " , letra);
    printf("\n");
    system("pause");
    return 0;


}
