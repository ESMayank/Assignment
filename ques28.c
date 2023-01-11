#include <stdio.h>

int main() {
  int base, exponent, result, i;

  
  printf("Enter the base: ");
  scanf("%d", &base);
  printf("Enter the exponent: ");
  scanf("%d", &exponent);

  
  result = 1; 
  for (i = 1; i <= exponent; i++) {
    result = result * base; 
  }

  
  printf("%d to the power of %d is %d.\n", base, exponent, result);

  return 0;
}
