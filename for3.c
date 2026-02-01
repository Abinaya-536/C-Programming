#include <stdio.h>

int main() {
    int n, units;
    int total = 0;

    
    scanf("%d", &n);

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &units);
        total = total + units;
    }

    
    printf("Total Units: %d", total);

    return 0;
}
