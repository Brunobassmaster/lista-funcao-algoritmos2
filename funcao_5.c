#include <stdio.h>
/*6 - Faça uma função que recebe a idade de uma pessoa em anos, meses e dias
e retorna essa idade expressa em dias.*/
int funcao(int valor)
  {
   if (valor < 0)
     {
     printf("1");
     }
   if(valor > 0)
     {
     printf("0");
     }

  }
int main()
  {
  int valor;
  printf("veja se o numero e positivo ou negativo: \n");
  printf("digite um numero\n");
  scanf("%d", &valor);
  funcao(valor);
  return(0);
  }
