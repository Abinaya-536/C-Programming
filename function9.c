#include <stdio.h>

int isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    int remainder;

    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed)
        return 1;
    else
        return 0;
}

int main() {
    int N;

    scanf("%d", &N);

    if (isPalindrome(N))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
