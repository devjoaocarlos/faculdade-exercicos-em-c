#include <stdio.h>

float distribuido(float fabricacao)
{
  float custodistribuidor = fabricacao * 0.28;

  return custodistribuidor;
}

float imposto(float fabricacao)
{
  float custoImposto = fabricacao * 0.45;

  return custoImposto;
}

float consumido(float fabricacao, float distribuido, float imposto)
{
  float custoConsumido = (fabricacao + distribuido + imposto);

  return custoConsumido;
}

int main()
{
  float fabricacao, consumidor, distribuidor, impostos;

  printf("Valor inicial do carro: \n");
  scanf("%f", &fabricacao);

  distribuidor = distribuido(fabricacao);
  impostos = imposto(fabricacao);
  consumidor = consumido(fabricacao, distribuidor, impostos);

  printf("Valor total do carro = R$ %.0f reais \n", consumidor);
  printf("Valor do Imposto = R$ %.2f reais \n", imposto);
  printf("Valor do Distribuidor = R$ %.0f reais \n", distribuidor);

  return 0;
}
// distribuidor 28% = 0.28
// imposto 45% = 0.45