#include <stdio.h>

void Fibonacci(int n) {
    int a = 0, b = 1, next, i;

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int N;
    scanf("%d", &N);

     Fibonacci(N);

    return 0;
}
