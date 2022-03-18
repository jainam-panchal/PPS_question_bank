#include<stdio.h>

int main() {
  FILE * f1, * f2, * f3;
  int number, i, n = 10;

  f1 = fopen("DATA.txt", "w");

  for (i = 0; i < n; i++) {
    scanf("%d", & number);
    if (number == -1) {
      break;
    }
    putw(number, f1);
  }
  fclose(f1);

  f1 = fopen("DATA.txt", "r");
  f2 = fopen("o.txt", "w");
  f3 = fopen("e.txt", "w");

  while ((number = getw(f1)) != EOF) {
    if (number % 2 == 0) {
      putw(number, f3);
    } else {
      putw(number, f2);
    }
  }

  fclose(f1);
  fclose(f2);
  fclose(f3);

  return 0;
}