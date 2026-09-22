#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("\nBefore swapping: First = %.2f, Second = %.2f\n", num1, num2);

    // Swapping logic without a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping: First = %.2f, Second = %.2f\n", num1, num2);

    return 0;
}
