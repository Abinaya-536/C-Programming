#include <stdio.h>

int main() {
    int battery, n, drain;

    
    scanf("%d", &battery);

    
    scanf("%d", &n);

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &drain);
        battery = battery - drain;
    }

   
    printf("Remaining Battery: %d%%", battery);

    return 0;
}
