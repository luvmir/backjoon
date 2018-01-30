#include <stdio.h>

int main(void) {
  int number;
  int i;

  scanf("%d", &number);

  for ( i = 1; i <= number; i++) {
    printf("%d\n", i);
  }

  return 0;
}
