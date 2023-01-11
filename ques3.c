#include <stdio.h>

int main() {
    float angle1, angle2;

    printf("Enter the measure of the first angle: ");
    scanf("%f", &angle1);

    printf("Enter the measure of the second angle: ");
    scanf("%f", &angle2);

    float angle3 = 180 - angle1 - angle2;
    printf("The measure of the third angle is: %f", angle3);
    
    return 0;
}
