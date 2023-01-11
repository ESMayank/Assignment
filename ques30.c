#include <stdio.h>

int main() {
  int n, i, j, k;

  
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i; j++) {
      printf(" "); 
    }
    for (k = 0; k <= i; k++) {
      printf("%d ", binomialCoeff(i, k)); 
    }
    printf("\n"); 
  }

  return 0;
}


int binomialCoeff(int n, int k) {
  int res = 1;
  if (k > n - k) {
    k = n - k;
  }
  for (int i = 0; i < k; ++i) {
    res *= (n - i);
    res /= (i + 1);
  }
  return res;
}
