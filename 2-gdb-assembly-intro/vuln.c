#include <stdio.h>
#include <stdlib.h>

void copy(char *dst, char *src) {
  while (*src != '\0') {
    *(dst++) = *(src++);
  }
  *dst = *src; // copy the terminating 0 byte as well
}

int main(int argc, char **argv) {
  char buf[4];
  if (argc < 2) {
    printf("Usage: %s <some string>\n", argv[0]);
    return EXIT_FAILURE;
  }
  copy(buf, argv[1]);
  printf("%s\n", buf);
	return EXIT_SUCCESS;
}

