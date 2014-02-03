#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  char *pingargv[] = {"/bin/ping", "mbl.is", NULL};
  char *envp[] = {NULL};
  execve("/bin/ping", pingargv, envp);

}
