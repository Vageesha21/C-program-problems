#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
    int x=1;

  for (int i = 1; x <= N; i++) {
   
    if (i% 3 != 0) {
      printf("%d ", i * i);
        x++;
    }
  }

  return 0;
}