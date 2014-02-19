#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int *m = malloc(100 * sizeof(int));
  char *s = malloc(100 * sizeof(char));
  double *x = malloc(100 * sizeof(double));
  printf("sizeof(int)=%d\n", sizeof(int));
  printf("sizeof(char)=%d\n", sizeof(char));
  printf("sizeof(double)=%d\n", sizeof(double));
  m[0] = 10;
  strcpy(s, "trausti");
  x[0] = 5.5;
  printf("m[0]=%d\n", m[0]);
  printf("s=%s\n", s);
  printf("x[0]=%lf\n", x[0]);


  s = realloc(s, 1000);
  strcpy(s, "traustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitraustitrausti");
  printf("s after realloc=%s\n", s);


  free(m);
  free(s);
  free(x);
}
