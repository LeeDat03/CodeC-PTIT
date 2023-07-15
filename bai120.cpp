#include<stdio.h>
#include<string.h>
#include<ctype.h>

int tong(char c[]){
	int s=0;
	for(int i=0;i<strlen(c);++i){
		s+=c[i]-'0';
	}
	return s;
}

int check(char c[]){
	if(tong(c)%10!=0) return 0;
	if(c[0]!='8' || c[strlen(c)-1]!='8') return 0;
	for(int i=0;i<strlen(c);++i){
		if(c[i]!=c[strlen(c)-1-i]) return 0; 
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
