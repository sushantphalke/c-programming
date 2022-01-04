#include <stdio.h>
int function1(int arr[], int sizeOfArr) {
 
  for (int i = 0; i < sizeOfArr / sizeof(int); i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
int main() {
  int arr[] = {31, 32, 33, 34, 36};
  int sizeOfArr = sizeof(arr);
  // printf("%d\n%d\n", sizeOfArr);
  function1(arr, sizeOfArr);

  return 0;
}