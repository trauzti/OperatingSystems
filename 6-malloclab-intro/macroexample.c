#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define badmax(a,b) (a > b ? a : b)
#define max(a,b) ((a) > (b) ? (a) : (b))
#define badmult(a,b) (a*b)
#define mult(a,b) ((a)*(b))


int main(void) {
  printf("badmax(10,11)=%d\n", badmax(10,11));
  printf("badmax(10+2,11)=%d\n", badmax(10+2,11));
  printf("badmult(5+5, 6+6)=%d (we want 120)\n", badmult(5+5,6+6));
  printf("mult(5+5, 6+6)=%d (we want 120)\n", mult(5+5,6+6));
}
