#include <stdio.h>
#include <stdlib.h>
/*Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas. A primeira e a
segunda prova t�m peso 1 e a terceira tem peso 2. Antes de o usu�rio entrar com as notas do
aluno ele deve entrar com o n�mero de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua m�dia e indicar se o aluno foi aprovado ou reprovado. A nota
para aprova��o deve ser igual ou superior a 60 pontos*/

int main(){
    int matricula;
    printf("Digite o numero de matricula: ");
    scanf("%d", &matricula);
    float n1, n2, n3, mediaponderada;
    printf("\nNota 1: ");
    scanf("%f", &n1);
    printf("\nNota 2: ");
    scanf("%f", &n2);
    printf("\nNota 3: ");
    scanf("%f", &n3);
    mediaponderada = ((n1*1) + (n2 *1) + (n3 * 2))/4;
    if (mediaponderada >=6){
        printf("\nAluno: %d" , matricula);
        printf("\nNota: %.2f" , mediaponderada);
        printf("\nVoce foi aprovado, parabens!");
    } else
    {
        printf("\nAluno: %d" , matricula);
        printf("\nNota: %.2f" , mediaponderada);
        printf("\nVoce foi reprovado, estude mais um pouco!");
    }
    printf("\n");
    system("pause");
    return 0;
    }


