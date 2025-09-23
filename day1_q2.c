#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, prod;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Perform operations
    sum = a + b;
    diff = a - b;
    prod = a * b;

    // Check division by zero
    if (b != 0) {
        quotient = (float)a / b;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Division by zero is not allowed!\n");
    }

    // Display results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    return 0;
}
