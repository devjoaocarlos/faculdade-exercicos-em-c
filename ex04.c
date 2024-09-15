#include <stdio.h>

int main()
{
  char nome;
  float salarioBruto, salarioLiquido, desconto;

  printf("Digite o nome do funcionario: \n");
  scanf("%s", &nome);

  printf("Digite seu salario bruto: \n");
  scanf("%f", &salarioBruto);

  // 10% == 0.10
  desconto = salarioBruto * 0.10;
  salarioLiquido = salarioBruto - desconto;

  printf("seu salario liquido R$ %.0f reais \n", salarioLiquido);

  return 0;
}