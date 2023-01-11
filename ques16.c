#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The natural numbers from 1 to %d are: \n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\n");

    printf("The sum of the natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
