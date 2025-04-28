#include <stdio.h>

char texto(char nome[])
  {
  char resultado = printf("%s!\n",nome);
  return resultado;
  }
int main()
  {
  texto("alex");
  return(0);
  }
