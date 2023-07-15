#include<stdio.h>


//4			444444
//43		3333	4
//432		22		34
//432		1		234

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		int a=n;
		for(int j=1;j<=i;++j){
			printf("%d",a--);
		}
		for(int j=2*n-2*i;j>=1;--j){
			printf("%d",n+1-i);
		}
		int b=n+2-i;
		for(int j=2;j<=i;++j){
			printf("%d",b++);
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;--i){
		int a=n;
		for(int j=1;j<=i;++j){
			printf("%d",a--);
		}
		for(int j=2*n-2*i;j>=1;--j){
			printf("%d",n+1-i);
		}
		int b=n+2-i;
		for(int j=2;j<=i;++j){
			printf("%d",b++);
		}
		printf("\n");
	}
}
