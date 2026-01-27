#include <stdio.h>

int main() {

    int at, yrs;

    scanf("%d", &at);
    scanf("%d", &yrs);

    switch (at) {

        case 1:
            printf("Interest 4%%");
            break;

        case 2:
            if (yrs <= 3)
                printf("Interest 5%%");
            else
                printf("Interest 7%%");
            break;
    }

    return 0;
}
