#include <stdio.h>
#include <stdlib.h>
/* Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma. */

int main()
{
   int h= 15, m =30, s=10;
   printf("A hora inicial eh: %d:%d:%d", h, m, s);
   int duracao = 10800;
   printf("\nA hora de duracao da experiencia em segundos eh: %d", duracao);
   int horas, minutos, segundos;
   horas = duracao / 3600;
   minutos = (duracao-(horas*3600))/60;
   segundos = duracao - (horas*3600)-(minutos*60);
   int hf, mf, sf;
   hf= h + horas;
   mf= m + minutos;
   sf= s + segundos;
   printf("\nA experiencia terminara as: %d:%d:%d", hf, mf, sf );

   printf("\n");
   system("pause");
   return 0;
}

