#include <stdio.h>

int main()
{
  float lado, area;

  printf("Insira o comprimeto do quadrado: \n");
  scanf("%f", &lado);

  area = lado * lado;

  printf("A area do quadrado: %.0fcm \n", area);

  printf("Pressione Enter para sair...");
	getchar();
	getchar();

  return 0;
}