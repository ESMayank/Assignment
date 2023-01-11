#include <stdio.h>

int main() {
  int n, i, j, sum, num, fact;

 
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  
  for (i = 1; i <= n; i++) {
    sum = 0;
    num = i; 
    while (num > 0) {
      fact = 1; 
      for (j = 1; j <= num % 10; j++) {
        fact = fact * j;  
      }
      sum = sum + fact; 
      num = num / 10; 
    }
    if (sum == i) {
      printf("%d ", i); // i is a strong number
    }
  }

  return 0;
}
