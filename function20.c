#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

     printf("Enter two numbers and an operator (+ - * /): ");
    scanf("%d %d %c", &num1, &num2, &op);

    if(op == '+') {
        result = num1 + num2;
        printf("Result: %d\n", result);
    } 
    else if(op == '-') {
        result = num1 - num2;
        printf("Result: %d\n", result);
    } 
    else if(op == '*') {
        result = num1 * num2;
        printf("Result: %d\n", result);
    } 
    else if(op == '/') {
        if(num2 != 0)
            printf("Result: %.2f\n", (float)num1 / num2);
        else
            printf("Error: Division by zero\n");
    } 
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
