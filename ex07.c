#include <stdio.h>
#include <math.h>

int main()
{
  int x1, x2, y1, y2, distancia;

  printf("Informe as coodernadas do ponto P: \n");
  scanf("%d %d", &x1, &x2);

  printf("Informe as coodernadas do ponto Q: \n");
  scanf("%d %d", &y1, &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  printf(" A distancia entre os pontos e: %d \n", distancia);

  printf("Pressione Enter para sair...");
	getchar();
	getchar();
  
  return 0;
}