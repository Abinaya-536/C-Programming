#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    
 
    int *ptr = arr;

 
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

  
    int *start = arr;
    int *end = arr + n - 1;
    int temp;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

 
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
