#include<stdio.h>
#include<string.h>

void strrev(char *s)
{
    int i,temp,n;
    n=strlen(s);
	for(i=0;i<n/2;i++)  
    {
    	temp=s[i];
    	s[i]=s[n-i-1];
    	s[n-i-1]=temp;
 
 	}
	  
 }
int main(){
	char a[20],b[20];
	int check;

	scanf("%s",a);
	strcpy(b,a);
	strrev(a);
	
	check = strcmp(a,b);
	if(check == 0){
		printf("Yes, It is palindrome.");
	}
	else printf("Not Palindrome.");
	return 0;
}