#include <stdio.h>
float calculateSI(int P, int R, int T) {
    float SI;
    SI = (P * R * T) / 100.0;
    return SI;
}

int main() {
    int P, R, T;
    float interest;

       scanf("%d %d %d", &P, &R, &T);
    interest = calculateSI(P, R, T);

    printf("%.2f", interest);

    return 0;
}
