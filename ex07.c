#include <stdio.h>
#include <math.h>

// declaração da função
int calcular_a_distancia(int x1, int x2, int y1, int y2);

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

  // chamada da função
  distancia = calcular_a_distancia(x1, x2, y1, y2);

  printf("Distancia = %d \n", distancia);

  return 0;
}

// Criando a função que recebe 4 valores por parametro e verifca qual a distância entre eles: 
int calcular_a_distancia(int x1, int x2, int y1, int y2)
{
  int distancia;

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  return distancia;
}