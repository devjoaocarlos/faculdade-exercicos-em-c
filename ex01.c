#include <stdio.h>

int main()
{
  int numero1, numero2, resultado;

  printf("Digite o primeiro numero: \n");
  scanf("%d", &numero1);

  printf("Digite o segundo numero: \n");
  scanf("%d", &numero2);

  resultado = (numero1 + numero2) * 3;

  printf("Resultado = %d \n", resultado);

  return 0;
}