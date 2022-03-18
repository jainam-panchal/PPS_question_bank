#include<stdio.h>

int main(){
	int i,start,end,value;
	printf("Enter Starting and Ending number: \n");
	scanf("%d%d",&start,&end);

	printf("Even Numbers: ");
	for(i=start;i<=end;i++)
	{
		if(i%2 == 0){
			printf("%d ",i);
		}
	}
	printf("\nOdd Numbers: ");
	for(i=start;i<=end;i++)
	{
		if(i%2 != 0){
			printf("%d ",i);
		}
	}
	return 0;
}