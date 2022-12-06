#include <stdio.h>

int main() {
  long x, cx;
  printf("Введите число\n");
  scanf("%ld", &x);
  while (x < 100 || x >= 1000000000) {
    printf("Введите корректное число\n");
    scanf("%ld", &x); 
  }

  long by3 = 0, rem1by3 = 0, rem2by3 = 0;
  long k3 = 1, k1 = 1, k2 = 1;
  
  zero = 0; flag = 1; int just3 = 0;
  while (x > 0) {
    int rem = x % 10;
    x /= 10;
    if (rem % 3 == 0) {
      by3 += k3 * rem;
      k3 *= 10;
    }
    else if (rem % 3 == 1) {
      rem1by3 += k1 * rem;
      k1 *= 10;
    }
    else if (rem % 3 == 2) {
      rem2by3 += k2 * rem;
      k2 *= 10;
    }
  }
  
  long sum = by3 + rem1by3 + rem2by3;
  printf("%ld, %ld, %ld, %ld\n", by3, rem1by3, rem2by3, sum);
  
  return 0;
}