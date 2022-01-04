#include<stdio.h>

int fibonacci_recursive(int number){
  if(number == 1 || number == 2){

    return number-1;
  }
  else{
    return(fibonacci_recursive(number-1)+fibonacci_recursive(number-2 ));
  }

}

int main(){
  int number;
  printf("Enter the number to get fibonacci series :");
  scanf("%d",&number);
  printf("the value of fibonacci number at position no %d using interative approch is %d \n",number,fibonacci_recursive(number));
   return 0 ;
}