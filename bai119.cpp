#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char c[]){
	for(int i=0;i<strlen(c);++i){
		if(c[i]!=c[strlen(c)-i-1]) return 0;
		else if(c[i]==c[strlen(c)-i-1]){
			if(c[i]%2!=0) return 0;
			if(c[strlen(c)-i-1]%2!=0) return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		if(check(c)) printf("YES\n");
		else printf("NO\n");
	}
}
