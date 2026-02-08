#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int salary[R][C];
    int i, j;

      for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);
        }
    }

    int minDept = 0;
    float minAvg;

       int sum = 0;
    for (j = 0; j < C; j++) {
        sum += salary[0][j];
    }
    minAvg = (float)sum / C;

       for (i = 1; i < R; i++) {
        sum = 0;
        for (j = 0; j < C; j++) {
            sum += salary[i][j];
        }

        float avg = (float)sum / C;

        if (avg < minAvg) {
            minAvg = avg;
            minDept = i;
        }
    }

       printf("%d", minDept);

    return 0;
}
