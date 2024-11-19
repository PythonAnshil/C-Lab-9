#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
    float num1, num2, result;
    char operation;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operation) {
        case '+': result = add(num1, num2); printf("Result: %.2f\n", result); break;
        case '-': result = subtract(num1, num2); printf("Result: %.2f\n", result); break;
        case '*': result = multiply(num1, num2); printf("Result: %.2f\n", result); break;
        case '/': if (num2 != 0) { result = divide(num1, num2); printf("Result: %.2f\n", result); } else { printf("Error: Division by zero is not allowed.\n"); } break;
        default: printf("Invalid operation.\n"); break;
    }
    return 0;
}
