#include <stdio.h>

int main() {
    char op;
    int num1, num2, result;

    // 1. Take operator input from the user
    printf("Enter an operator (+, -, *, /, %%): ");
    // Note: The space before %c allows it to skip any leftover newline characters
    scanf(" %c", &op);

    // 2. Take two integer inputs
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // 3. Process the operation using switch-case
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            // Error handling for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is undefined.\n");
            }
            break;

        case '%':
            // Error handling for modulus by zero
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Modulus by zero is undefined.\n");
            }
            break;

        // Default case handles unexpected operators
        default:
            printf("Error! Invalid operator entered.\n");
            break;
    }

    return 0;
}
