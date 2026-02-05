#include <stdio.h>

int main() {
    int n;
    int arr[100];

   
    scanf("%d", &n);

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }

        leftSum += arr[i];
    }

 
    printf("-1");

    return 0;
}
