#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check_tang(char c[]){
	for(int i=6;i<9-1;++i){
		if(c[i]>=c[i+1]) return 0;
	}
	if(c[10]>=c[11]) return 0;
	return 1;
}

int check_bang(char c[]){
	for(int i=6;i<9-1;++i){
		if(c[i]!=c[i+1]) return 0;
	}
	if(c[10]!=c[11]) return 0;
	return 1;
}

int check_tiep(char c[]){
	for(int i=6;i<9;++i){
		if(c[i]!='6' && c[i]!='8') return 0;
	}
	if(c[10]!='6' && c[10]!='8') return 0;
	if(c[11]!='6' && c[11]!='8') return 0;		
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		if(check_tang(c)==1 ||check_bang(c)==1 || check_tiep(c)==1) printf("YES\n");
		else printf("NO\n");
	}
}
