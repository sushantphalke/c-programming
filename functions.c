#include <stdio.h>

float multiplication(float a, float b) {
  return a * b;
}
int main() {
  float m = multiplication(3, 4);
  printf("%f\n", m);
  printf("%f",multiplication(33,34));
  return 0;
}