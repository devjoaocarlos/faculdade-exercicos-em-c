#include <stdio.h>

int main()
{
  float lado, area;

  printf("Digite o comprimeto do quadrado: \n");
  scanf("%f", &lado);

  area = lado * lado;

  printf("A area do quadrado: %.0fcm \n", area);

  return 0;
}