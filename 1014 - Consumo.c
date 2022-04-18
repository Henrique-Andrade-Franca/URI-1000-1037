#include <stdio.h>

int main(void) {
  
  int X;
  float Y, consumo;

  scanf("%d", &X);
  scanf("%f", &Y);

  consumo = (X * 1.0) / Y;
  printf("%.3f km/l\n", consumo);

  return 0;
}
