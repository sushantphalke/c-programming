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

  //******** IMP  ********
  printf("right staircase\n");
  int stairs = 8;
  for (int i = 0; i <= stairs; i++) {
    for (int j = 0; j <= stairs; j++) {
      if (j >= stairs - i) {
        printf("*");
      } else {
        printf(".");
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
