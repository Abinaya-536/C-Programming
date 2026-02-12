#include <stdio.h>

int main() {
    char address[1000];  
    int i = 0, spaceCount = 0;

    printf("Enter the address: ");
    fgets(address, sizeof(address), stdin); 

    // Count spaces
    while (address[i] != '\0') {
        if (address[i] == ' ') {
            spaceCount++;
        }
        i++;
    }

    printf("Number of spaces: %d\n", spaceCount);

    return 0;
}
