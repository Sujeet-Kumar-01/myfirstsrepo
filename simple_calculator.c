#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Ask user for operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    // Ask user for two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Exit program with error
            }
            printf("Result: %.2lf\n", result);
            break;

        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    return 0;
}
