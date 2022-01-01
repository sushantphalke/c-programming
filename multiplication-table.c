#include<stdio.h>
int main(){
  float number;
  printf("Enter the number for its table: ");
  scanf("%f",&number);
  for(float table = 1;table<=10;table++){
    printf("%f\n",table*number);
  }

}