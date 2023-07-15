#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int d=0;
		char *t=strtok(c," ");
		while(t!=NULL){
			t=strtok(NULL," ");
			++d;
		}
		printf("%d\n",d);
	}
}
