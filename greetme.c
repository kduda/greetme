
#include <stdio.h>

extern char *greeting();

int main() {
  printf("%s, mundo!\n", greeting());
  return 0;
}
