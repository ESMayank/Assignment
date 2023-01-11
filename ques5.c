#include <stdio.h>
#include <math.h>

int main() {
    double num, power, square_root;
    int exponent;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Enter the exponent for the power calculation: ");
    scanf("%d", &exponent);

    power = pow(num, exponent);
    square_root = sqrt(num);

    printf("The result of raising %.2lf to the power of %d is: %.2lf\n", num, exponent, power);
    printf("The square root of %.2lf is: %.2lf", num, square_root);
    
    return 0;
}
