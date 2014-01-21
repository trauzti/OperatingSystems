#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x,y;
  x = 4; // 0100
  y = 8; // 1000
  printf("Shift operator: x=%d, x<<1=%d\n", x, x<< 1);
  printf("And operator: x&y == %d\n", x & y);
  printf("Or operator: x|y == %d\n", x | y);
  printf("XOR operator: x^y == %d\n", x ^ y);
  printf("NOT operator: -x == %d\n", -x);
  // -x == ~x + 1
  printf("-x rule: ~x+1 == %d\n", ~x+1);
}




