#include<stdio.h>
int main(){
	int choice;
	float c,f;
	printf("Enter 1 for Celsius to Fehrenheit\n");
	printf("Enter 2 for Fehrenheit to Celsius\n");
	scanf("%d",&choice);

	if(choice == 1){
	    printf("Celsius = ");
	    scanf("%f",&c);
	
	    f=(1.5*c)+32;
	
	    printf("Fehrenheit = %f\n",f);
		}

    else{
    	printf("Fehrenheit = ");
    	scanf("%f",&f);

    	c = ((f-32)*5)/9;

    	printf("Celsius = %f\n",c);
    }
    return 0;
}