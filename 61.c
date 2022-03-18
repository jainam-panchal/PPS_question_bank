#include<stdio.h>
int gcd(int a, int b){
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
    return gcd(a-b, b);
    
    return gcd(a, b-a);
}

int main(){
	int num1,num2;
	printf("Enter two number to find GCD: ");
	scanf("%d%d",&num1,&num2);
	printf("\nGCD of entered number is %d.",gcd(num1,num2));
	return 0;
}
