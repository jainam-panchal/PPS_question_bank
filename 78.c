#include <stdio.h>

struct time_struct {
  int hour;
  int minute;
  int second;
}
t;

int main(void) {
  printf("Hour : ");
  scanf("%d", &t.hour);
  printf("Minute: ");
  scanf("%d",&t.minute);
  printf("Second : ");
  scanf("%d",&t.second);

  printf("\nTime %d:%d:%d", t.hour%24, t.minute%60,t.second%60);

  return 0;
}