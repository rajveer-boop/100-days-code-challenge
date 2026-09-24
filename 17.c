#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Prompt user for coefficients
    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    // Check if it is a valid quadratic equation
    if (a == 0) {
        printf("Invalid quadratic equation (coefficient 'a' cannot be 0).\n");
        return 1;
    }

    // Calculate discriminant (b^2 - 4ac)
    discriminant = (b * b) - (4 * a * c);

    // Categorize and find roots based on the discriminant
    if (discriminant > 0) {
        // Condition 1: Real and Distinct Roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("\nRoot Category: Real and Distinct\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (discriminant == 0) {
        // Condition 2: Real and Equal Roots
        root1 = root2 = -b / (2 * a);
        
        printf("\nRoot Category: Real and Equal\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    else {
        // Condition 3: Complex (Imaginary) Roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("\nRoot Category: Complex and Distinct\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
