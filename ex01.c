#include <stdio.h>

int main()
{
  int n1, n2, result;

  printf("Primeiro numero: ");
  scanf("%d", &n1);

  printf("Segundo numero: ");
  scanf("%d", &n2);

  result = (n1 + n2) * 3;

  printf("Resultado = %d \n", result);

  return 0;
}