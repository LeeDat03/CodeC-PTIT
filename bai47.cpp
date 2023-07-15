//			eeeee
//e			dddd
//ed		ccc
//edc		bb
//edcb		a

//				ffffff
//f				eeeee
//fe			dddd
//fed			ccc

#include<stdio.h>

int max(int n,int m){
	if(n>=m) return n;
	return m;
}

int min(int n,int m){
	if(n<=m) return n;
	return m;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	char a=max(n,m)+96;
	for(int i=1;i<=n;++i){
		char tmp=a;
		for(int j=2;j<=i;++j){
			printf("%c",tmp--);
		}
		for(int j=1;j<=m-i+1;++j){
			printf("%c",tmp);
		}
		if(i==m) break;
		printf("\n");
	}
	printf("\n");
	for(int i=m+1;i<=n;++i){
		char tmp=a;
		for(int j=1;j<=m;++j){
			printf("%c",tmp--);
		}
		printf("\n");
	}
}
