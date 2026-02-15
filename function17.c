#include <stdio.h>

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    int i;
    for (i = 1; i <= exp; i++) {
        result = result * base;
    }
    return result;
}

int isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digit, digits;

    digits = countDigits(n);

    while (n > 0) {
        digit = n % 10;
        sum = sum + power(digit, digits);
        n = n / 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    if (isArmstrong(N))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
