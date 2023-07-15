//4 4
//ABCD
//BCD		A
//CD		BA
//D			CBA
//
//3 5	
//ABCDE
//BCDE		A
//CDE		BA
//
//5 3
//ABC
//BC		A
//C			BA
//C			BA
//C			BA

#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		char a=64,b=i+a,c=i+a-1;
		for(int j=1;j<=m-i+1;++j){
			printf("%c",b++);
		}
		for(int j=2;j<=i;++j){
			printf("%c",c--);
		}
		if(i==m) break;
		printf("\n");
	}
	printf("\n");
	for(int i=m+1;i<=n;++i){
		char a=64,c=a+m;
		printf("%c",c);
		for(int j=2;j<=m;++j){
			printf("%c",--c);
		}
		printf("\n");
	}
}
