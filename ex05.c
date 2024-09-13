#include <stdio.h>

int main()
{
  float base, altura, area;

  printf("Insira a base do triangulo: \n");
  scanf("%f", &base);

  printf("Insira a altura do triangulo: \n");
  scanf("%f", &altura);

  area = (base * altura) / 2;

  printf("A area do triangulo: %.0fcm \n", area);

  printf("Pressione Enter para sair...");
	getchar();
	getchar();

  return 0;
}