#include <stdio.h>
#include <stdlib.h>


void impossible() {
  printf("I will never be called!\n");
  exit(0);
}

void getbuf() {
  char buf[64];
  gets(buf);
}


int main(void) {
  getbuf();
  printf("Everything worked correctly\n");
  return 0;
}

