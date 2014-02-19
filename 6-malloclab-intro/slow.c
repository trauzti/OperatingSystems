#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int slow() {
  int i, sum = 0;

  for (i = 0; i < 100000000 ; i++) {
    sum += i;
  }
  return sum;
}

int fast() {
  return 1;
}

int main(void) {
  printf("slow=%d\n", slow());
  printf("fast=%d\n", fast());
}
