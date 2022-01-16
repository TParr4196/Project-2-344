#include <stdio.h>

int main(int argc, const char *argv[]) {
  int x = 12;
  float y = 3.14;
  char* s = "Hello, world!";
  printf("x is %d, y is %f\n", x, y);
  printf("%s\n", s);
  int i = 0;
  while(i<=4){
    printf("%d x 5 = %d\n", i, i*5);
    i++;
  }
}