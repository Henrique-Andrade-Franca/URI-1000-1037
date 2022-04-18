#include <stdio.h>

int main(void) {
  
  int CODIGO1, QUANTID1, CODIGO2, QUANTID2;
  double VALOR1, VALOR2, TOTAL;

  scanf("%d %d %lf", &CODIGO1, &QUANTID1, &VALOR1); 
  scanf("%d %d %lf", &CODIGO2, &QUANTID2, &VALOR2);

  TOTAL = (QUANTID1 * VALOR1) + (QUANTID2 * VALOR2);
  printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);


  return 0;
}
