#include<stdio.h>
int main() {
    char str[20];
    scanf("%s",str);
    int i=0;
    while (str[i] != '\0') {
       if (str[i]>='A'&& str[i]<='Z') {
           printf("valid");
       }else {
           printf("invalid");
       }
        printf("%s",str[i]);
    }

    return 0;
}