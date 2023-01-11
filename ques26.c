#include <stdio.h>
#include <math.h>

int main() {
  int n, i, num, lastDigit, digits, sum;

  /* Read the value of n */
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  /* Check for Armstrong numbers */
  for (i = 1; i <= n; i++) {
    num = i; // store the value of i in num
    lastDigit = num % 10; // get the last digit of num
    digits = (int) log10(num) + 1; // get the number of digits in num
    sum = 0; // initialize sum to 0
    while (num > 0) {
      sum = sum + pow(num % 10, digits); // add the digit raised to the power of digits to the sum
      num = num / 10; // remove the last digit from num
    }
    if (sum == i) {
      printf("%d ", i); // i is an Armstrong number
    }
  }

  return 0;
}
