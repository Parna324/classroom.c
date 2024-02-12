#include <stdio.h>

int main() {
    double double1, double2;

    
    printf("Enter the first double value: ");
    scanf("%lf", &double1);

    
    printf("Enter the second double value: ");
    scanf("%lf", &double2);

    
    printf("First double value: %.2lf\n", double1);
    printf("Second double value: %.2lf\n", double2);

    return 0;
}