#include<stdio.h>

int main(){

  int a =33;
  int * ptr = &a;
  printf("the value of pointer a %d\n",*ptr);
  printf("the address of pointer to a is %x\n",ptr);
  printf("the address of pointer to a is %x\n",&ptr);


}