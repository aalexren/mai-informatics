#include <stdio.h>

const int maxn = 8;

int main() {
    int n;
    int m[maxn][maxn];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    int i_min = 0;
    int min = m[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m[i][j] < min) {
                min = m[i][j];
                i_min = i;
            }
    
    for (int j = 0; j < n / 2; j++) {
        int t = m[i_min][j];
        m[i_min][j] = m[i_min][n-j-1];
        m[i_min][n-j-1] = t;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}