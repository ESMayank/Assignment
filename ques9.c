#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    int max = (x > y) ? x : y;
    max = (max > z) ? max : z;

    printf("The maximum of the three numbers is: %d\n", max);

    return 0;
}
