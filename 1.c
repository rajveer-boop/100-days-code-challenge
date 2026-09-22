#include <stdio.h>

int main() {
    float num1, num2, sum;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the sum
    printf("The sum is: %.2f\n", sum);

    return 0;
}
