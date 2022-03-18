#include<stdio.h>
#include<string.h>

int main(){
	int i,end,sum=0;
	int number = 1;
	printf("Enter Value of N terms: ");
	scanf("%d",&end);

	for(i=1;i<=end;i++){
		sum += number;
		number += 2;
	}

	printf("Sum = %d",sum);
	return 0 ;
}