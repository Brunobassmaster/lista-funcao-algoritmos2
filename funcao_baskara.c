#include <stdio.h>
#include <math.h>
int baskara(float a, float b, float c)
  {
  float x1;
  float x2;
  float delta = (b*b) -4*a*c;
  if(delta < 0)
    {
    printf("nao e uma raiz real");
    }
    else
      {
      x1 = (-b + sqrt(delta)) / (2*a);
      x2 = (-b - sqrt(delta)) / (2*a);
      }
  printf(" raizes da equacao; x1 %.2f e x2 = %2.f", x1, x2);
  }
int main ()
  {
  float a;
  float b;
  float c;
  printf("digite os coeficientes para baskaras \n");
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  baskara(a,b,c);
  return(0);
  }
