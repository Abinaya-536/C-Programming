#include <stdio.h>

int main() {
    int r, c;
    int a[10][10];
    int i, j;
    int count = 0;

      scanf("%d %d", &r, &c);

     for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

     for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++) {
            if(i != j) {
                sum = sum + a[i][j];
            }
        }

       
        if(a[i][i] > sum) {
            count++;
        }
    }

      printf("%d", count);

    return 0;
}
