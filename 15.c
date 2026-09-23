#include <stdio.h>

int main() {
    char ch;

    // Input from user
    printf("Enter any character: ");
    scanf(" %c", &ch); // The space before %c handles any trailing newline characters

    // Check for Uppercase Alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase alphabet.\n", ch);
    }
    // Check for Lowercase Alphabet
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase alphabet.\n", ch);
    }
    // Check for Digit
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    }
    // If it doesn't match any of the above, it's a special character
    else {
        printf("'%c' is a Special character.\n", ch);
    }

    return 0;
}
