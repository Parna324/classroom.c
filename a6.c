#include <stdio.h>

int main() {
    long double long_double1, long_double2;

    
    printf("Enter the first long double value: ");
    scanf("%Lf", &long_double1);

   
    printf("Enter the second long double value: ");
    scanf("%Lf", &long_double2);

    
    printf("First long double value: %.2Lf\n", long_double1);
    printf("Second long double value: %.2Lf\n", long_double2);

    return 0;
}