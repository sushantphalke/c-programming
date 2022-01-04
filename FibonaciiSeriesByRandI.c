#include<stdio.h>

int fibonacci_recursive(int number){
  if(number == 1 || number == 2){

    return number-1;
  }
  else{
    return(fibonacci_recursive(number-1)+fibonacci_recursive(number-2 ));
  }

}
int fibonacci_iterative(int number){
  int a=0;
  int b=1;
  for(int i=1;i<number;i++){
    b=a+b;
    a=b-a ;//numbers swaped
  }
  return  a;
}

int main(){
  int number;
  printf("Enter the number to get fibonacci series :");
  scanf("%d",&number);
  printf("the value of fibonacci number at position no %d using recursive approch is %d \n",number,fibonacci_recursive(number));
  printf("the value of fibonacci number at position no %d using iterative approch is %d \n",number,fibonacci_iterative(number));
   return 0 ;
}
