#include<stdio.h>
#include<string.h>
#include<ctype.h>

int tong(char c[]){
	int s=0;
	for(int i=0;i<strlen(c);++i){
		s+=c[i]-'0';
	}
	return s%10==0;
}

int check(char c[]){
	if(tong(c)==0) return 0;
	for(int i=0;i<strlen(c)/2;++i){
		if(c[i]!=c[strlen(c)-1-i]) return 0;
	}
	return 1;
}

int main(){
	char c[1000];
	gets(c);
	printf("%d",tong(c));
}
