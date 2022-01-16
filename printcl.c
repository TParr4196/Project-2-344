#include <stdio.h>

int main(int argc, const char *argv[]) {
  int i=0;
  while(i<argc){
    printf("%s\n", argv[i]);
    i++;
  }
}