#include <stdio.h>

int isprime(int n){
	int i;
	for(i=2;i<n/2;i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n,i,value;
	for(i=1;i<=100;i++){
		value = isprime(i);
		if(value == 1){
			printf("%d ",i);
		}
	}
	return 0;
}