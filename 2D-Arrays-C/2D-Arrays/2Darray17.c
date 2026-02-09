#include <stdio.h>

int main() {
    int R, C;
    int matrix[10][10];    
    int i, j;
    int count = 0;

    scanf("%d %d", &R, &C);

      for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < R; i++) {
        int diagonal = matrix[i][i];
        int sum = 0;

        for(j = 0; j < C; j++) {
            if(j != i) {
                sum = sum + matrix[i][j];
            }
        }

        if(diagonal > sum) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
