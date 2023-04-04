
#include <stdio.h>

extern char *greeting();

int main() {
  printf( "%s, world!\n", greeting() );
  return 0;
}
