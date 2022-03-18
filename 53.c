#include<stdio.h>

int factorial(int n){
	int fact;
	if(n==0) return 1;
	if(n==1) return 1;
	fact = n * factorial(n-1);
}

int main(){
	int i,n;
	double sum = 0.0;
	printf("Enter number of terms: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		sum += 1.0/factorial(i);
	}

	printf("Sum = %f",sum);
    return 0;
}