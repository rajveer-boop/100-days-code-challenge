#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the remainder is 0 when divided by 2
    if (num % 2 == 0) {
        printf("%d is an Even number.\n", num);
    } else {
        printf("%d is an Odd number.\n", num);
    }

    return 0;
}
