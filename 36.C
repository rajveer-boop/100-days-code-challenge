#include <stdio.h>

// Function to calculate HCF/GCD using the Euclidean Algorithm
int findHCF(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 < 0 || num2 < 0) {
        printf("Please enter valid non-negative integers.\n");
        return 1;
    }

    int hcf = findHCF(num1, num2);
    
    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
