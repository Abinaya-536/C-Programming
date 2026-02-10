#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int mat[R][C];

      for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int maxLen = 0;
    int resultRow = 0;

      for (int i = 0; i < R; i++) {
        int currLen = 1;

        for (int j = 1; j < C; j++) {
         
            if ((mat[i][j] % 2) != (mat[i][j - 1] % 2)) {
                currLen++;
            } else {
                break;
            }
        }

     
        if (currLen > maxLen) {
            maxLen = currLen;
            resultRow = i;
        }
    }

    printf("%d", resultRow);
    return 0;
}
