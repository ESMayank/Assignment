#include <stdio.h>

int main() {
  int n, i, j, sum;

  /* Read the value of n */
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  /* Check for perfect numbers */
  for (i = 1; i <= n; i++) {
    sum = 0; // initialize sum to 0
    for (j = 1; j < i; j++) {
      if (i % j == 0) {
        sum = sum + j; // add the proper divisor to the sum
      }
    }
    if (sum == i) {
      printf("%d ", i); // i is a perfect number
    }
  }

  return 0;
}
#include <stdio.h>

int main() {
  int num, i, sum;

  /* Read the value of num */
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  /* Check if num is a perfect number */
  sum = 0; // initialize sum to 0
  for (i = 1; i < num; i++) {
    if (num % i == 0) {
      sum = sum + i; // add the proper divisor to the sum
    }
  }
  if (sum == num) {
    printf("%d is a perfect number.\n", num);
  } else {
    printf("%d is not a perfect number.\n", num);
  }

  return 0;
}
