#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1000];
	gets(c);
	for(int i=0;i<strlen(c);++i){
		c[i]=tolower(c[i]);
	}
	char a[100][100];
	int n=0;
	char *t=strtok(c," ");
	while(t!=NULL){
		strcpy(a[n],t);
		++n;
		t=strtok(NULL," ");
	}
	int m=1,d=0;
	char x[100][100];
	strcpy(x[0],a[0]);
	for(int i=1;i<n;++i){
		d=0;
		for(int j=0;j<i;++j){
			if(strcmp(a[i],a[j])==0) ++d;
		}
		if(d==0){
			strcpy(x[m],a[i]);
			++m;
		}
	}
	for(int i=0;i<m;++i){
		d=0;
		for(int j=0;j<n;++j){
			if(strcmp(a[j],x[i])==0) ++d;
		}
		printf("%s %d\n",x[i],d);
	}
}
