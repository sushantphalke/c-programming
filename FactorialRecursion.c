#include<stdio.h>

int Factorial(int num){
 if (num == 1 || num ==0){
   return 1;
 }
 else{
   return (num *Factorial(num-1));
 }
}

int main(){
  int num;
  printf("Enter number to calculate factorial: ");
  scanf("%d", &num);
  printf("the factorial of %d is %d ",num,Factorial(num));
}
