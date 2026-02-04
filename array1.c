#include<stdio.h>
int main() {
   int size;
    scanf("%d",&size);
    int max=0;
    int min=-1;
    int arr[size];
   int sec;
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>max) {
            max=arr[i];
        }
        for(int j=0;j<size;j++) {
            if (arr[i]>min) {
                min=arr[i];
            }
            int sec;
            for(int k=0;k<size;k++) {
                if (arr[i]>max && arr[i]<min) {
                    sec=arr[i];
                }
            }

            }
        }


    printf("%dlargest:",max);
    printf("%dSecond:",sec);

    return 0;
}

