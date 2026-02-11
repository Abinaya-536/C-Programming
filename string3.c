#include<stdio.h>
int main() {
    char str[20];
    scanf("%s",str);
    int i=0;
    while (str[i] != '@') {
        printf("%c",str[i]);
        i++;

       }


    return 0;
}