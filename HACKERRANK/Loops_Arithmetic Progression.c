#include <stdio.h>

int main() {
  int n, a, d;
  scanf("%d %d %d", &n, &a, &d);
    

    
  for (int i = 1; i <= n; i++) {
    int num = a +(i-1)* d;
    printf("%d ", num);
  }

 

  return 0;
}