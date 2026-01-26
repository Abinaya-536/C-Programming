#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a >= 10 && a <= 20)
        printf("Number in range");
    else
        printf("Number out range");

    return 0;
}
