#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);     
    int arr[size];

    // Read customer IDs
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        int isDuplicate = 0;  

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;  
            }
        }

        if(!isDuplicate) {
            printf("%d ", arr[i]);  
        }
    }

    printf("\n");
    return 0;
}
