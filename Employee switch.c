#include <stdio.h>

int main() {

    int code, experience;
    int salary = 0;

    scanf("%d", &code);
    scanf("%d", &experience);

    switch (code) {
        case 1:
            salary = 50000;
            break;
        case 2:  
            salary = 35000;
            break;
        default:
            salary = 0;  // In case of invalid code
    }

       if (experience >= 3) {
        salary += experience * 5000;
    }

    printf("Salary ₹%d", salary);

    return 0;
}
