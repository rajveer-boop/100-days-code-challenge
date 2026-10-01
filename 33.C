#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int n = 0;
    int result = 0;

    // 1. Count the total number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // 2. Calculate the sum of the power of individual digits
    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        
        // round() handles potential floating-point inaccuracies from pow()
        result += round(pow(remainder, n)); 
        
        temp /= 10;
    }

    // 3. Compare sum with the original number
    return (result == originalNum);
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
