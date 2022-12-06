#include <stdio.h>

int main() {

  printf("Hello, Charles!\n");
  int a = 10101; int res = 0; int b = 1;

  while (a > 0) {
    res = res + a%10 * b;
    b *= 2;
    a /= 10;
  }

  printf("%d\n", res);
  
  return 0;
}
