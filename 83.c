#include<stdio.h>
int main(){

	char c;
	FILE *fp = fopen("text.txt","r");
	FILE *fp2 = fopen("text2.txt","w");
	c = getc(fp);

	while(c!=EOF){
		putc(c,fp2);
		c = getc(fp);
	}
	fclose(fp);
	fclose(fp2);
	return 0;

}