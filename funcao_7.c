/*7 - Fa�a uma fun��o que verifique se um valor � perfeito ou n�o. Um valor
� dito perfeito quando ele � igual a soma dos seus divisores excetuando ele
pr�prio. (Ex: 6 � perfeito, 6 = 1 + 2 + 3, que s�o seus divisores). A fun��o
deve retornar o valor inteiro 1 para verdadeiro e 0 caso contr�rio. */
#include <stdio.h>
int perfeito(num)
  {
  int somadiv = 0;
  int div;
  int i = 1;
  int x;
  printf("Digite um numero: ");
  scanf("%d", &x);
  while( i < x)
    {

    div = x/i;

    if( x % i == 0)
      {
      somadiv = div + somadiv;
      printf("%d\n\n", somadiv);
      }
    if(somadiv == x)
      {
      printf("e um numero perfeito");
      }
    if(somadiv != x)
      {
      printf("nao e um numero perfeito");
      }

    i++;
    }
  return(0);
  }







int main()
  {
  perfeito();
  return(0);
  }
