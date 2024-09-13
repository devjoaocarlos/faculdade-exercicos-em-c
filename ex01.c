#include <stdio.h>

int main()
{
  int numero1, numero2, resultado;

  printf("Digite o primeiro numero: \n");
  scanf("%d", &numero1);

  printf("Digite o segundo numero: \n");
  scanf("%d", &numero2);

  resultado = (numero1 + numero2) * 3;

  printf("O resultado e: %d \n", resultado);

  printf("Pressione Enter para sair...");
	getchar();
	getchar();

  return 0;
}