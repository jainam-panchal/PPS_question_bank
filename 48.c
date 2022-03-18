#include<stdio.h>
#include<string.h>

int main(){
	int i,end;
	printf("Enter Value of N: ");
	scanf("%d",&end);

	printf("\nOdd Numbers: ");
	for(i=1;i<=end;++i){
		if(i%2 != 0){
			printf("%d ",i);
		}
	}
	return 0;
}