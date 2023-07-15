#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char c[]){
	for(int i=0;i<strlen(c);++i){
		if(isdigit(c[i])==0) return 0;
	}
	return 1;
}

int check_chan(char c[]){
	int chan=0,le=0;
	if(strlen(c)%2!=0) return 0;
	else{
		for(int i=0;i<strlen(c);++i){
				if((c[i]-'0')%2==0) ++chan;
				else ++le;
			}
		if(chan<=le) return 0;
		return 1;
	}
}

int check_le(char c[]){
	int chan=0,le=0;
	if(strlen(c)%2==0) return 0;
	else{
		for(int i=0;i<strlen(c);++i){
				if((c[i]-'0')%2!=0) ++chan;
				else ++le;
			}
		if(chan>=le) return 0;
		return 1;
	}
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		if(check(c)==0) printf("INVALID\n");
		else{
			if(check_chan(c)==1 || check_le(c)==1) printf("YES\n");
			else printf("NO\n");
		}
	}
}
