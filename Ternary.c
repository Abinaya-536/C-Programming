#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);

    c = (a < b) ? a : b;

    printf("%d is smallest", c);

    return 0;
}
