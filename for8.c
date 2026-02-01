#include <stdio.h>

int main() {
    int n, loss;
    int total = 0, highDays = 0;

    
    scanf("%d", &n);

   
    for(int i = 0; i < n; i++) {
        scanf("%d", &loss);
        total = total + loss;

        if(loss > 100) {
            highDays = highDays + 1;
        }
    }

   
    printf("Total Loss: %d\n", total);
    printf("High Loss Days: %d", highDays);

    return 0;
}
