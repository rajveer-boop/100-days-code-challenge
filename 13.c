#include <stdio.h>

int main() {
    int year;

    // Input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Conditional logic for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}
