#include <stdio.h>
int parimpar(int valor)
  {
  if(valor % 2 == 0)
    {
    printf("par");
    }
  if(valor % 2 == 1)
    {
    printf("impar");
    }
  }


int main()
  {
  int valor;
  printf("veja se o numero e impar ou par: \n");
  printf("digite um numero\n");
  scanf("%d", &valor);
  parimpar(valor);
  }
