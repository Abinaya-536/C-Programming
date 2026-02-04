#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);          
    int arr[size];

   
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = 0;           
    int oddCount = 0;         

    
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) { 
            evenCount++;
        } else {               
            oddCount++;
        }
    }

    
    printf("Even:%d Odd:%d\n", evenCount, oddCount);

    return 0;
}
