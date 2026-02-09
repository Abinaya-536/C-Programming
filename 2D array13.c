#include <stdio.h>

int main() {
    int r, c;
    int i, j;

    scanf("%d %d", &r, &c);

    int a[r][c];

     for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c / 2; j++) {
            if (a[i][j] != a[i][c - 1 - j]) {
                break;
            }
        }

       
        if (j == c / 2) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
