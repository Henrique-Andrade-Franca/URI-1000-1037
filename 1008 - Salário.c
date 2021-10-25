#include <stdio.h>

int main(void) {
  
  int NUMBER, HORAS;
  double VALOR, SALARY;

  scanf("%d", &NUMBER);
  scanf("%d", &HORAS);
  scanf("%lf", &VALOR);

  SALARY = HORAS * VALOR;
  printf("NUMBER = %d\n", NUMBER);
  printf("SALARY = U$ %.2lf\n", SALARY);

  return 0;
}
