#include<stdio.h>

int primecheck(int num)
{
    int i, rem, flag = 0;
    for (i = 2; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            flag = 1;
            break;
        }
    }
    return (flag);
}

int main(){
  int n,result;
  printf("Enter Number to check Prime: ");
  scanf("%d",&n);

  result = primecheck(n);
  if(result == 0){
    printf("Prime");
  }
  else printf("Not Prime");

  return 0;
}