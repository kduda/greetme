
#include <stdio.h>

extern char *greeting();

int main() {
  printf("%s, world!  Yay!\n", greeting());
  return 0;
}
