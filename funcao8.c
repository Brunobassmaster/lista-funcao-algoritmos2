#include <stdio.h>

int verificarSinal(int numero)
  {
  if (numero >= 0)
    {
    return 1;
    }
  else
    {
    return -1;
    }
  }

int main()
  {
  int valor, resultado;

  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);

  resultado = verificarSinal(valor);

  if (resultado == 1)
    {
    printf("O valor eh positivo.\n");
    }
  else
    {
    printf("O valor eh negativo.\n");
    }

  return 0;
  }

