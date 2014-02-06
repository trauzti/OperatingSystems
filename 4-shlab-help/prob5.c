#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  void *x = malloc(2*sizeof(int));
  char *c = x;
  int *i = x;
  strcpy(c, "ABCDEFGH");

  // 'A' == 0x41
  // 'B' == 0x42
  // 'C' == 0x43
  // 'D' == 0x44
  // the question: are we going to see 0x41424344 or 0x44434241
  //
  // so the memory is read backwards => 0x44434241
  //
  // BCDA, HGFE, etc.
  printf("%x\n", i[0]);
  printf("%x\n", i[1]);
}
