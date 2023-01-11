#include <stdio.h>
#include <math.h>

#define PI 3.14159

double diameter(double radius) {
    return 2 * radius;
}

double circumference(double radius) {
    return 2 * PI * radius;
}

double area(double radius) {
    return PI * pow(radius, 2);
}

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Diameter of the circle is: %lf\n", diameter(radius));
    printf("Circumference of the circle is: %lf\n", circumference(radius));
    printf("Area of the circle is: %lf\n", area(radius));

    return 0;
}
