#include<stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i,vowels=0;
 
    printf("Enter a string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
      if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
      {
    
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
        vowels++;
      }
    }
    
    printf("Total vowels = %d\n",vowels);
    return 0;
}