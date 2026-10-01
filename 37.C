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

// Function to calculate LCM
int findLCM(int a, int b) {
    // LCM of 0 and any number is 0
    if (a == 0 || b == 0) {
        return 0;
    }
    
    int hcf = findHCF(a, b);
    
    // Dividing first prevents potential integer overflow during (a * b)
    return (a / hcf) * b;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 < 0 || num2 < 0) {
        printf("Please enter valid non-negative integers.\n");
        return 1;
    }

    int lcm = findLCM(num1, num2);
    
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
