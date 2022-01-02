#include <stdio.h>

int main() {
label:
  printf("i have gone inside label \n");
  goto end;
printf("programe starts");
goto label;
end:
printf("now i am at the end");
}