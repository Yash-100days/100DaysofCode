//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
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
