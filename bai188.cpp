#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuanhoa(char c[]){
	for(int i=0;i<strlen(c);++i){
		c[i]=tolower(c[i]);
	}
}

int main(){
	char c[1000];
	gets(c);
	char a[100][100];
	int n=0;
	char *t=strtok(c," ");
	while(t!=NULL){
		chuanhoa(t);
		strcpy(a[n],t);
		++n;
		t=strtok(NULL," ");
	}
	for(int i=0;i<n-1;++i){
		printf("%c",a[i][0]);
	}
	printf("%s@ptit.edu.vn",a[n-1]);
}
