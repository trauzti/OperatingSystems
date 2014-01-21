#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x ;
  if ( (x = fork()) == 0) {
    printf("I'm the child :D\n");
  } else {
    printf("I'm the parent the pid of the child is %d\n", x);

    printf("Waiting for the child ...\n");
    int a, b;
    a = wait(&b);
    printf("DONE waiting for the child ... the pid was %d\n", a);

  }
  return 0;
}
