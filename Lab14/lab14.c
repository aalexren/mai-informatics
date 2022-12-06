#include <stdio.h>

const int maxn = 7;

int main() {
 
  int n; 
  int m[maxn][maxn];
  int dir[4] = { 1, 0, -1, 0 };
  
  scanf("%d", &n);
  printf("Введённая матрица\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      m[i][j] = (i + 1) * 10 + (j + 1);
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  int c = n * n;
  int i = -1, j = 0;
  int d = 0, l = n;
  printf("Напечатанная строка\n");
  while (c > 0) {
    for (int k = 0; k < l; k++) {
      i += dir[d % 4];
      j += dir[(d+3) % 4];
      printf("%d ", m[i][j]);
      c--;
    }
    d++;
    l -= d % 2;
  }
  printf("\n");
  
  return 0;
}
