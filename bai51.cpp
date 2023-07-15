#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	char a=63;
	for(int i=n*2;i>=2;i-=2){
		char b=a+n*2-i+2; 
		for(int j=2;j<=i;j+=2){
			printf("%c",b);
			b+=2; 
		} 
		printf("\n"); 
	} 
} 
