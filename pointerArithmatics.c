#include <stdio.h>

int main() {
  char a = 33;
  char *ptr = &a;
  printf("address of ptr :%d\n", ptr);
  ptr++;
  printf("address of ptr by arithmatic ++ :%d\n", ptr);
  printf("address of ptr by arithmatic +2 :%d\n", ptr + 2);

  int b = 34;
  int *ptrb = &b;
  printf("address of ptrb :%d\n", ptrb);
  ptrb++;
  printf("address of ptrb by arithmatic ++ :%d\n", ptrb);
  printf("address of ptr by arithmatic -2 :%d\n", ptrb - 2);

  int arr[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int *ptrarr = arr;
  printf("address of first element of arr :%d\n", &arr[0]);
  printf("address of first element of arr by pointer:%d\n", ptrarr);
  printf("first element of arr by pointer :%d\n", *ptrarr);
  printf("third element of arr by pointer :%d\n", *ptrarr + 2);

  return 0;
}