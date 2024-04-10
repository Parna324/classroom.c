#include <stdio.h>

int main() {
    int a = 231;
    int last_digit = a % 10;            // Get the last digit
    a = a / 10;                         // Remove the last digit
    int second_last_digit = a % 10;     // Get the new last digit
    int sum = last_digit + second_last_digit; // Add the last two digits

    printf("Sum of last two digits of %d: %d\n", a, sum);

    return 0;
}
