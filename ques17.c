#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The even numbers from 1 to %d are: \n", n);
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
        sum += i;
    }
    printf("\n");

    printf("The sum of the even numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
