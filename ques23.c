#include <stdio.h>

int main() {
  int n, i, j, isPrime;

  /* Read the value of n */
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  /* Check for prime numbers */
  for (i = 2; i <= n; i++) {
    isPrime = 1; // assume i is prime
    for (j = 2; j < i; j++) {
      if (i % j == 0) {
        isPrime = 0; // i is not prime
        break;
      }
    }
    if (isPrime) {
      printf("%d ", i);
    }
  }

  return 0;
}
