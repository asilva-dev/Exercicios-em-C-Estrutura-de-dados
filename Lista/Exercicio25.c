#include <stdio.h>
#include <stdlib.h>
// Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos

int main()
{
   int horas, minutos, segundos;
   printf("Digite os segundos: ");
   scanf("%d" , &segundos);
   horas = segundos / 3600;
   minutos = (segundos -(horas*3600))/60;
   segundos = segundos - (horas*3600)-(minutos*60);
   printf("%dh: %dm: %ds: ", horas, minutos, segundos);
   printf("\n");
   system("pause");
   return 0;
}
