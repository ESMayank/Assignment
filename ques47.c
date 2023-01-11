#include <stdio.h>

// check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// check if a number is armstrong
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // count the number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        digits++;
    }

    // calculate the sum of cubes of digits
    for (int temp = num; temp != 0; temp /= 10) {
        int lastDigit = temp % 10;
        sum += pow(lastDigit, digits);
    }

    return (originalNum == sum);
}

// check if a number is perfect
int isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (num == sum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    if (isArmstrong(num)) {
        printf("%d is an armstrong",num);
    }
    else{
        printf("%d is not armstrong\n",num);
    }
}
