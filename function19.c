#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * power(base, exp - 1);
    }
}

int main() {
    int A, B;
   
    scanf("%d %d", &A, &B);
    
  
    printf("%d\n", power(A, B));
    
    return 0;
}
