#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    if (m >= 90)
        printf("Grade A");
    else if (m >= 75)
        printf("Grade B");
    else if (m >= 60)
        printf("Grade C");
    else
        printf("Grade D");

    return 0;
}
