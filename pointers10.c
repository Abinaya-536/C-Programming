#include <stdio.h>

int main() {
    char str[201];
    
   
    fgets(str, sizeof(str), stdin);
    
    char *p = str;
    int count = 0;

  
    while (*p != '\0') {
        if (*p == ' ') {
            count++;
        }
        p++;
    }


    printf("%d", count + 1);

    return 0;
}
