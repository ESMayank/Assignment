#include <stdio.h>

int main() {
    int base, height;

    printf("Enter the base of the triangle: ");
    scanf("%d", &base);

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    float area = (base * height) / 2;
    printf("The area of the triangle is: %.2lf", area);
    
    return 0;
}
