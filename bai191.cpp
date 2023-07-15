#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int n=1;
		for(int i=0;i<strlen(c)/2;++i){
			if(c[i]!=c[strlen(c)-1-i]) --n;
		}
		if(strlen(c)%2==0){
			if(n==0) printf("YES\n");
			else printf("NO\n");
		}
		else{
			if(n==0 || n==1) printf("YES\n");
			else printf("NO\n");
		}
	}
}
