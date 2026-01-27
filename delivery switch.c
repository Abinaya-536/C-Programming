#include <stdio.h>

int main() {

    int oa, st;

    scanf("%d", &oa);
    scanf("%d", &st);

    switch (st) {

        case 1:
            printf("Delivery ₹50");
            break;

        case 2:
            if (oa < 1000)
                printf("Delivery ₹100");
            else
                printf("Delivery Free");
            break;
    }

    return 0;
}
