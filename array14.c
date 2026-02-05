#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int arr[100];
    int min = INT_MAX;
    int found = 0;

   
    scanf("%d", &n);

      for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

       for(int i = 0; i < n; i++) {
        if(arr[i] > 0 && arr[i] < min) {
            min = arr[i];
            found = 1;
        }
    }

        if(found) {
        printf("%d", min);
    } else {
        printf("No positive");
    }

    return 0;
}
