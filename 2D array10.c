#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int data[R][C];
    int i, j;

        for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &data[i][j]);
        }
    }

    long long maxProduct;
    int maxRow = 0;

       maxProduct = 1;
    for (j = 0; j < C; j++) {
        maxProduct *= data[0][j];
    }

       for (i = 1; i < R; i++) {
        long long product = 1;
        for (j = 0; j < C; j++) {
            product *= data[i][j];
        }

        if (product > maxProduct) {
            maxProduct = product;
            maxRow = i;
        }
    }

      printf("%d", maxRow);

    return 0;
}
