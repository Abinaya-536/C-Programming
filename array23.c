#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int temp[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &temp[i]);
    }

    int closest = temp[0];

    for (int i = 1; i < N; i++) {
        if (abs(temp[i]) < abs(closest)) {
            closest = temp[i];
        }
        else if (abs(temp[i]) == abs(closest) && temp[i] > closest) {
                       closest = temp[i];
        }
    }

    printf("%d", closest);

    return 0;
}
