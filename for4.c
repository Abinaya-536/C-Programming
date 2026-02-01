#include <stdio.h>

int main() {
    int salary, absentDays;

    
    scanf("%d", &salary);

    
    scanf("%d", &absentDays);

    
    for(int i = 0; i < absentDays; i++) {
        salary = salary - 100;
    }

    
    printf("Final Salary: ₹%d", salary);

    return 0;
}
