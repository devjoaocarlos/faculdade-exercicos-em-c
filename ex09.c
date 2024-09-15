#include <stdio.h>

int main()
{
  // distribuidor 28% = 0.28
  // imposto 45% = 0.45

  float fabricacao, consumidor, distribuidor, imposto;

  printf("Digite o valor de fabricacao do carro: \n");
  scanf("%f", &fabricacao);

  distribuidor = 0.28 * fabricacao;
  imposto = 0.45 * fabricacao;

  consumidor = fabricacao + distribuidor + imposto;

  printf("O custo ao consumidor ficou de: %.0f reais \n", consumidor);

  return 0;
}