#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, const char *argv[]) {
  if(argc>1){
    char *buf = (char *) malloc(2048*sizeof(char));
    int descriptor = open(argv[1], O_CREAT);
    size_t bytes = read(descriptor, buf, 2048);
    write(1, buf, bytes);
    int i = 2;
    while(i<argc){
      descriptor = open(argv[2], O_CREAT);
      bytes = read(descriptor, buf, 2048);
      write(1, buf, bytes);
      i++;
    }
  }
  else{
    while(1){
      char *buf = (char *) malloc(2048*sizeof(char));
      size_t bytes = read(0, buf, 2048);
      if(bytes==0||bytes==-1){
        break;
      }
      write(1, buf, bytes);
    }
  }
}