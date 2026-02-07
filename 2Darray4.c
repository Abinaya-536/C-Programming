#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int arr[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

       for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {

            
            for (int k = j + 1; k < C; k++) {
                if (arr[i][j] == arr[i][k]) {
                    printf("%d", arr[i][j]);
                    return 0;
                }
            }

           
            for (int x = i + 1; x < R; x++) {
                for (int y = 0; y < C; y++) {
                    if (arr[i][j] == arr[x][y]) {
                        printf("%d", arr[i][j]);
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
