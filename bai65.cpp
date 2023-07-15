#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	printf("0 1 ");
	int a=0,b=1,c;
	for(int i=3;i<=n;++i){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c); 
	} 
} 
