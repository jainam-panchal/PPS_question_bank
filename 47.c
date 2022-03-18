#include<stdio.h>
#include<string.h>

int main(){
	int data[10],max;
	printf("Enter 10 integers to find maximum: ");
	for(int i=0;i<10;i++){
		scanf("%d",&data[i]);
	}

	max = data[0];
	for(int i=1;i<10;i++){
		if(data[i] > max){
			max = data[i];
		}
	}

	printf("\nMaximum Number = %d",max);
	return 0;
}