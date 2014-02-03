#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char **argv2;
  argv2 = malloc(16*sizeof(char *));
  argv2[0] = malloc(20 * sizeof(char));
  argv2[1] = malloc(20 * sizeof(char));
  argv2[2] = NULL;
  strcpy(argv2[0], "/bin/ping");
  strcpy(argv2[1], "mbl.is");
  char *bla = NULL;
  printf("argv2[0]=%s\n", argv2[0]);
  execve("/bin/ping", argv2, &bla);

}
