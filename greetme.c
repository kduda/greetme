
#include <stdio.h>

extern char *greeting();

int main() {
  printf("%s, world!  Hi everyone!\n", greeting());
  return 0;
}
