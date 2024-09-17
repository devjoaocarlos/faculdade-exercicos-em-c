#include <stdio.h>
#include <string.h>

int main()
{
  char nome[10];
  float salarioBruto, salarioLiquido, desconto;

  printf("Digite o nome do funcionario: \n");
  scanf("%s", nome);

  printf("Digite seu salario bruto: \n");
  scanf("%f", &salarioBruto);

  // 10% == 0.10
  desconto = salarioBruto * 0.10;
  salarioLiquido = salarioBruto - desconto;

  printf("%s seu salario liquido R$ %.0f reais \n", nome, salarioLiquido);

  return 0;
}