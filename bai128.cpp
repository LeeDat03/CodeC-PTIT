#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1000];
	gets(c);
	int m1=0,m2=0,m3=0,m4=0,d1=0,d2=0,d3=0,d4=0;
	for(int i=0;i<strlen(c);++i){
		if(c[i]=='(') ++m1;
		else if(c[i]==')') ++d1;
		else if(c[i]=='{') ++m2;
		else if(c[i]=='}') ++d2;
		else if(c[i]=='[') ++m3;
		else if(c[i]==']') ++d3;
		else if(c[i]=='"') ++m4;
	}
	if(m1==d1 && m2==d2 &&m3==d3 && m4%2==0) printf("1");
	else printf("0");
}
