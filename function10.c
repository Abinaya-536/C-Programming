#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    int sum = 0;
    int i;

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    return sum;
}

int main() {
    int N;
    scanf("%d", &N);

    printf("%d", sumOfNaturalNumbers(N));

    return 0;
}
