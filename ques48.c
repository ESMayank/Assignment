#include <stdio.h>

void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int num1, num2, result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    add(&num1, &num2, &result);

    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
