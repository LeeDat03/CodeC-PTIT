#include<stdio.h>
#include<string.h>

int snt(char c[]){
	for(int i=0;i<strlen(c);++i){
		if(c[i]!='2' && c[i]!='3'&&c[i]!='5'&&c[i]!='7') return 0;
	}
	return 1;
}

int check(char c[]){
	if(snt(c)==0) return 0;
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
