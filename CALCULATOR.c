#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input
    printf("SIMPLE CALCULATOR\n");
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1;  // Exit program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;  // Exit program with an error code
    }

    // Output the result
    printf("Result: %.1f\n", result);

    return 0;  // Exit program successfully
}
