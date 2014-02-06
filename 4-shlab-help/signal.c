#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

void pause() {
  int i;

  for (i = 0 ; i < 10; i++) {
    printf("%d ...\n", i);
    usleep(1000000);
    // 1s == 1000ms == 1000000us
  }

}

void sigint_handler() {
  printf("ctrl+c NOT EXITING!");
  //exit(0);
}

void sigtstp_handler() {
  printf("ctrl+z EXITING!");
  exit(0);
}

int main(void) {
  signal(SIGINT, sigint_handler);
  signal(SIGTSTP, sigtstp_handler);
  pause();
}
