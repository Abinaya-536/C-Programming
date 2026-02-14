#include <stdio.h>

void checkEvenOdd(int n) {
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main() {
    int num;

    scanf("%d", &num);

    checkEvenOdd(num);

    return 0;
}
