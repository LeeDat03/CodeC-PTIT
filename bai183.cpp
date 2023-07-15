#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char c[],int x){
	for(int i=0;i<strlen(c);++i){
		if(c[i]=='0'+x) return 1;
	}
	return 0;
}

int kt(char c[]){
	for(int i=0;i<=9;++i){
		if(check(c,i)==0) return 0;
	}
	return 1;
}

int check2(char c[]){
	if(c[0]=='0') return 0;
	for(int i=0;i<strlen(c);++i){
		if(isdigit(c[i])==0) return 0;	
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
		if(check2(c)==0) printf("INVALID\n");
		else{
			if(kt(c)==0) printf("NO\n");
			else printf("YES\n");
		}
	}
}
