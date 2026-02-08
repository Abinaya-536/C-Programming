#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    int i, j;

       for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxSum = 0;
    int currentSum;

       for (i = 0; i < R - 1; i++) {
        for (j = 0; j < C - 1; j++) {
            currentSum = matrix[i][j] 
                       + matrix[i][j + 1]
                       + matrix[i + 1][j]
                       + matrix[i + 1][j + 1];

            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

      printf("%d", maxSum);

    return
