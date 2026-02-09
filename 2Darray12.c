#include <stdio.h>

int main() {
    int r, c;
    int i, j, x, y;
    int count, max = 0;
    int mostfre;

       scanf("%d %d", &r, &c);

    int arr[r][c];

       for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {

            count = 0;

            for (x = 0; x < r; x++) {
                for (y = 0; y < c; y++) {
                    if (arr[i][j] == arr[x][y]) {
                        count++;
                    }
                }
            }

            if (count > max) {
                max = count;
                mostfre = arr[i][j];
            }
        }
    }

     printf("%d", mostfre);

    return 0;
}
