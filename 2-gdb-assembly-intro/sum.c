#include <stdio.h>
#include <stdlib.h>


int sum(int x, int y) {
  return x+y;
}


int main(int argc, char **argv) {

  printf("%d\n", sum(atoi(argv[1]), atoi(argv[2])));

	return 0;
}

