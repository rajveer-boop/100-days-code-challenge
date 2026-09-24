#include <stdio.h>

int main() {
    double side1, side2, side3;

    // Prompt user for the three sides
    printf("Enter the lengths of the three sides: ");
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    // Triangle Validity Check: Every side must be greater than 0
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Error: Side lengths must be greater than 0.\n");
        return 1;
    }

    // Triangle Inequality Theorem Check: 
    // The sum of any two sides must be strictly greater than the third side.
    if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        printf("The given sides do not form a valid triangle.\n");
        return 0;
    }

    // Classify the valid triangle
    if (side1 == side2 && side2 == side3) {
        // Condition 1: All sides are equal
        printf("Triangle Category: Equilateral\n");
    } 
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        // Condition 2: Any two sides are equal
        printf("Triangle Category: Isosceles\n");
    } 
    else {
        // Condition 3: No sides are equal
        printf("Triangle Category: Scalene\n");
    }

    return 0;
}
