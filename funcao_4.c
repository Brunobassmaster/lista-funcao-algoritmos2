#include<stdio.h>
/*5 - Fa�a um procedimento que recebe por par�metro o tempo de dura��o de
uma f�brica expressa em segundos e imprima esse tempo em horas, minutos
e segundos. .*/
float tempo(float seg )
  {
  float min = seg/60;
  float horas = min/60;
  int resultado = printf("horas: %.2f min \n minutos: %.2f \n segundos: %.2f ", horas,min,seg);
  return resultado;
  }
int main()
  {
  tempo(10000);
  return(0);
  }
