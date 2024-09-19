#include <stdio.h>
#include <math.h>

int main()
{
  int x1, x2, y1, y2, distancia;

  printf("Digite a primeira coodernada do ponto P: \n");
  scanf("%d", &x1);

  printf("Digite a segunda coodernada do ponto P: \n");
  scanf("%d", &x2);

  printf("Digite a primeira coodernada do ponto Q: \n");
  scanf("%d", &y1);

  printf("Digite a segunda coodernada do ponto Q: \n");
  scanf("%d", &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf("Distancia = %d \n", distancia);

  return 0;
}