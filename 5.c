#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius from the user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit (using 9.0 and 5.0 to ensure floating-point division)
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Display the result
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}
