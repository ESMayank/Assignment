#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("The character is ");
    (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? printf("an alphabet.\n") : 
    (c >= '0' && c <= '9') ? printf("a digit.\n") : printf("a special character.\n");

    return 0;
}
