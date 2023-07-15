#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuanhoa(char c[]){
	for(int i=0;i<strlen(c);++i){
		c[i]=tolower(c[i]);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	for(int i=1;i<=t;++i){
		char a[1000],b[1000];
		gets(a);
		gets(b);
		char c[100][100];
		int n=0;
		char *t=strtok(a," ");
		while(t!=NULL){
			strcpy(c[n],t);
			++n;
			t=strtok(NULL," ");
		}	
		char x[1000],y[1000];
		strcpy(y,b);
		chuanhoa(y);
		printf("Test %d:",i);
		for(int i=0;i<n;++i){
			strcpy(x,c[i]);
			chuanhoa(x);
			if(strcmp(x,y)!=0) printf("%s ",c[i]);
		}
		printf("\n");
	}
}
