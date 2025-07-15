#include <stdio.h>

void tipoTriangulo(float x, float y, float z)
  {
  if (x < y + z && y < x + z && z < x + y)
    {
    if (x == y && y == z)
      {
      printf("Triangulo Equilatero\n");
      }
    else if (x == y || y == z || x == z)
      {
      printf("Triangulo Isosceles\n");
      }
    else
      {
      printf("Triangulo Escaleno\n");
      }
    }
  else
    {
    printf("Nao formam um triangulo\n");
    }
  }

int main()
  {
  float a, b, c;

  printf("Digite tres valores reais: ");
  scanf("%f %f %f", &a, &b, &c);

  tipoTriangulo(a, b, c);

  return 0;
  }
