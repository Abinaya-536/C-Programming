#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int sum = 0, count = 0;
    float avg;

    
    scanf("%d", &n);

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    avg = (float)sum / n;

       for(int i = 0; i < n; i++) {
        if(arr[i] > avg) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
