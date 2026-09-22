#include <stdio.h>

int main() {
    float radius, area, circumference;
    // Define the value of PI
    const float PI = 3.14159265;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
