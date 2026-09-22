#include <stdio.h>

int main() {
    float num1, num2, temp;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("\nBefore swapping: First = %.2f, Second = %.2f\n", num1, num2);

    // Swapping logic using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: First = %.2f, Second = %.2f\n", num1, num2);

    return 0;
}
