#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuan_hoa(char c[]){
	for(int i=0;i<strlen(c);++i){
		c[i]=tolower(c[i]);
	}
	c[0]=toupper(c[0]);
}

void chuan_hoa2(char c[]){
	for(int i=0;i<strlen(c);++i){
		c[i]=toupper(c[i]);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char *t=strtok(c," ");
		char a[100][100];
		int n=0;
		while(t!=NULL){
			chuan_hoa(t);
			strcpy(a[n],t);
			++n;
			t=strtok(NULL," ");
		}
		for(int i=1;i<n;++i){
			printf("%s",a[i]);
			if(i!=n-1) printf(" ");
		}
		chuan_hoa2(a[0]);
		printf(", %s\n",a[0]);
	}
}
