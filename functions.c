#include <stdio.h>

float multiplication(float a, float b) {
  return a * b;
}
void alert() {
  printf("alert function reached without arguments without return function");
}
int main() {
  float m = multiplication(3, 4);
  printf("%f\n", m);
  printf("%f\n", multiplication(33, 34));
  alert();
  return 0;
}