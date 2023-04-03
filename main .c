#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %lf", result);
            break;
        case '/':
            if(num2 == 0) {
                printf("Error: Cannot divide by zero");
            }
            else {
                result = num1 / num2;
                printf("Result: %lf", result);
            }
            break;
        default:
            printf("Invalid operator");
    }
    
    return 0;
}
