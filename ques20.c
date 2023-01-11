#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, num, digit, rev = 0;
    bool isPalindrome = true;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    num = n;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (n != rev) {
        isPalindrome = false;
    }

    if (isPalindrome) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }

    return 0;
}
