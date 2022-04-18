#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int a, b, c, maiorAb;

  scanf("%d %d %d", &a, &b, &c);

  maiorAb = (a + b + abs(a - b)) / 2;
  maiorAb = (c + maiorAb + abs(maiorAb - c))/ 2;
  
  printf("%d eh o maior\n", maiorAb);

  return 0;
}
