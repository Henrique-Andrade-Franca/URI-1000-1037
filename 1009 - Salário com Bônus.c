#include <stdio.h>

int main(void) {

  char NOME;
  double SALARIO, VENDAS, TOTAL;

  scanf("%s", &NOME);
  scanf("%lf", &SALARIO);
  scanf("%lf", &VENDAS);

  TOTAL = SALARIO + (0.15 * VENDAS);
  printf("TOTAL = R$ %.2lf\n", TOTAL);

  return 0;
}
