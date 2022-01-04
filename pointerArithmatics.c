#include<stdio.h>


int main(){
  char a = 33;
  char * ptr = &a;
  printf("%d\n",ptr);
  ptr++;
  printf("%d\n",ptr);
  printf("%d\n",ptr-2);

  int b = 34;
  int * ptrb = &b;
  printf("%d\n",ptrb);
  ptrb++;
  printf("%d\n",ptrb);
  printf("%d\n",ptrb-2);
  
  
   return 0 ;
}