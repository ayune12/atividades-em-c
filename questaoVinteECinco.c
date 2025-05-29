#include <stdio.h>

int main() {
     float tf, tc;

  printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &tf);

  tc = (tf - 32) * 5.0 / 9.0;
  printf("a temperatura em celcius é %.1f", tc);

    return 0;
}
