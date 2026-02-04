#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int sum = 0;

        for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }


    int n = size + 1;
    int total = n * (n + 1) / 2;

    int missing = total - sum;

    printf("Missing:%d\n", missing);

    return 0;
}
