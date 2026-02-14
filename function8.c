#include <stdio.h>
int reverseNumber(int n) {
    int reversed = 0;

    while(n > 0) {
        reversed = reversed * 10 + (n % 10);
        n = n / 10;                   
    }

    return reversed;
}

int main() {
    int N;
    scanf("%d", &N);

    int result = reverseNumber(N);

    printf("%d", result);

    return 0;
}
