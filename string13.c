#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, index = -1;
    scanf("%s", str);
    scanf(" %c", &ch);
    while(str[i] != '\0') {
        if(str[i] ==ch) {
            index = i;
        }
        i++;
    }
    printf("%d", index);

    return 0;
}
