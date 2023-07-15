#include<stdio.h>

//@ABC
//ABC		C
//BC		CC
//C			CCC

int main(){
	int a,b;
	char c=63;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;++i){
		char d=c+i;
		for(int j=1;j<=b-i+1;++j){
			printf("%c",d++);
		}
		for(int j=2;j<=i;++j){
			printf("%c",d-1);
		}
		printf("\n");
		if(i==b) break;
	}
	for(int i=b+1;i<=a;++i){
		for(int j=1;j<=b;++j){
			printf("%c",c+b);
		}
		printf("\n");
	}
}
