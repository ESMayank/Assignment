#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    int lsb = num & 1;
    printf("LSB: %d\n", num, lsb);

    
    int msb = 0;
    while (num) {
        msb++;
        num >>= 1;
    }
    printf("MSB: %d\n", num, msb);

    return 0;
}
