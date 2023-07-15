#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1000],a[100][100],b[100]={0};
	gets(c);
	char *t=strtok(c," ");
	int n=0;
	while(t!=NULL){
		strcpy(a[n],t);
		n++;
		t=strtok(NULL," ");
	}
	for(int i=1;i<n;++i){
		for(int j=0;j<i;++j){
			if(strcmp(a[i],a[j])==0) ++b[i];
		}
	}
	for(int i=0;i<n;++i){
		if(b[i]==0) printf("%s ",a[i]);
	}
}
