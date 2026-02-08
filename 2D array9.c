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

    int balancedCount = 0;

        for (i = 0; i < R; i++) {
        int evenCount = 0;
        int oddCount = 0;

        for (j = 0; j < C; j++) {
            if (matrix[i][j] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        if (evenCount == oddCount) {
            balancedCount++;
        }
    }

       printf("%d", balancedCount);

    return 0;
}
