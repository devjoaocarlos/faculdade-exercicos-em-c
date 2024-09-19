#include <stdio.h>

int main()
{
  float lado, area;

  printf("Digite o comprimeto do quadrado: \n");
  scanf("%f", &lado);

  area = lado * lado;

  printf("Area do quadrado = %.0fcm \n", area);

  return 0;
}