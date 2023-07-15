#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char s1[1000],s2[1000];
	gets(s1);
	gets(s2);
	char *t=strtok(s1," ");
	char a[100][100],b[100][100];
	int n=0,m=0;
	while(t!=NULL){
		strcpy(a[n],t);
		++n;
		t=strtok(NULL," ");
	}
	char c[100][100];
	int d=0,x=1;
	strcpy(c[0],a[0]);
	for(int i=1;i<n;++i){
		d=0;
		for(int j=0;j<i;++j){
			if(strcmp(a[i],a[j])==0) ++d;
		}
		if(d==0){
			strcpy(c[x],a[i]);
			++x;
		}
	}
	t=strtok(s2," ");
	while(t!=NULL){
		strcpy(b[m],t);
		++m;
		t=strtok(NULL," ");
	}
	for(int i=0;i<x-1;++i){
		for(int j=i+1;j<x;++j){
			if(strcmp(c[i],c[j])>0){
				char swap[100];
				strcpy(swap,c[i]);
				strcpy(c[i],c[j]);
				strcpy(c[j],swap);
			}
		}
	}
	for(int i=0;i<x;++i){
		int d=0;
		for(int j=0;j<m;++j){
			if(strcmp(c[i],b[j])==0) ++d;
		}
		if(d==0) printf("%s ",c[i]);
	}
}
