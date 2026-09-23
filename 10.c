#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Calculation
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Printing in HH:MM:SS format (02d pads single digits with a leading zero)
    printf("Formatted Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
v
