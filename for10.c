#include <stdio.h>

int main() {
    int N, i;
    int total = 0;
    int highUseDays = 0;
    
    
    scanf("%d", &N);
    
    int usage[N];    for(i = 0; i < N; i++) {
        scanf("%d", &use[i]);
        total += use[i];        
        if(usage[i] > 2) {         
            highUseDays++;
        }
    }
    
    
    printf("Total Data: %d\n", total);
    printf("High Usage Days: %d\n", highUseDays);
    
    return 0;
}
