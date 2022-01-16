#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, const char *argv[]) {
  char *buf = (char *) malloc(2048*sizeof(char));
  int descriptor = open(argv[1], O_CREAT);
  size_t bytes = read(descriptor, buf, 2048);
  buf[bytes]='\0';
  write(1, buf, bytes);
}