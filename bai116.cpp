#include<stdio.h>
#include<string.h>
#include<ctype.h>
//old but gold\

int main(){
	char c[1000];
	gets(c);
	int chu=0,so=0,kitu=0;
	for(int i=0;i<strlen(c);++i){
		if(isalpha(c[i])!=0) ++chu;
		else if(isdigit(c[i])!=0) ++so;
		else ++kitu;
	}
	printf("%d %d %d",chu,so,kitu);
}
