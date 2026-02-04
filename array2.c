#include<stdio.h>
int main() {
   int size;
    scanf("%d",&size);
    int arr[size];
    int count=0;
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
        if (arr[i]==50) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

