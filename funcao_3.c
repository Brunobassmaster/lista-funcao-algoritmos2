#include <stdio.h>

char texto(char nome[])
  {
  printf("%s\n",nome);
  char a[] = {'o','k'};
  char resultado = printf("%s",a);
  return resultado;
  }




int main()
  {
  texto("alex");
  return(0);
  }
