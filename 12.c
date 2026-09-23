#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Outer if-else checks if the number is greater than or equal to 0
    if (num >= 0) {
        // Inner (nested) if-else separates zero from positive numbers
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("%d is a Positive number.\n", num);
        }
    } else {
        printf("%d is a Negative number.\n", num);
    }

    return 0;
}
