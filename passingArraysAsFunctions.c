#include <stdio.h>
int function1(int arr[], int sizeOfArr) {
  for (int i = 0; i < sizeOfArr / sizeof(int); i++) {
    printf("%d ,", arr[i]);
  }

  arr[1] = 334;
  return 0;
}
int function2(int *arr, int sizeOfArr) {
  printf("\n array from function 2:\n");
  for (int i = 0; i < sizeOfArr / sizeof(int); i++) {
    printf("%d ,", arr[i]);
  }

  arr[1] = 3433;
  return 0;
}
int function3(int arr[2][2]) {
  printf("\n array from function 3:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ,", arr[i][j]);
    }
    printf("\n");
  }

  arr[1][1] = 3433;
  return 0;
}
int main() {
  int arr[] = {31, 32, 33, 34, 36};
  int arr2[][2] = {{33, 34}, {9, 12}};
  int sizeOfArr = sizeof(arr);
  // printf("%d\n%d\n", sizeOfArr);
  function1(arr, sizeOfArr);
  printf("\nchanged value at index 1 is :%d\n", arr[1]);
  function2(arr, sizeOfArr);
  function2(arr, sizeOfArr);
  function3(arr2);
  function3(arr2);
  return 0;
}