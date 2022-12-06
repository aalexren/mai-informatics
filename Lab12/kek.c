#include <stdio.h>

int main() {

  int x = 20;
  int g = 1;
  while (x > 0) {
    x /= g;
    g--;
  }

  return 0;
}
