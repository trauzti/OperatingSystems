#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i = 0;
  while (argv[i] != NULL) {
    printf("argv[%d]=%s\n", i, argv[i]);
    i++;
  }

}

//ctrl+w+vinstri
//ctrl+w+haegri
