#include <stdio.h>
void main()
{
   int i,n,sum=0;

   printf("Enter number of terms : ");
   scanf("%d",&n);
   
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i-1);
     sum+=2*i-1;
   }
   printf("\nSum of %d N terms : %d \n",n,sum);
}
