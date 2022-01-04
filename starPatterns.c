#include <stdio.h>

int main() {
  printf("left staircase\n");
  for (int i = 0; i <= 8; i++) {
    for (int j = 0; j <= 8; j++) {
      if (i > j) {
        printf("*");
      }
    }
    printf("\n");
  }

  printf("right hanger\n");
  for (int i = 0; i <= 8; i++) {
    for (int j = 0; j <= 8; j++) {
      if (j > i) {
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}
