#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  char y;
} bla;

struct regular {
  int x;
  char y;
};

int main(void) {
  struct regular reg;
  reg.x = 10;

  bla nicestuff;
  nicestuff.x = 10;


}
