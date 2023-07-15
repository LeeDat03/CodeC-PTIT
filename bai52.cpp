#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	char x=63;
	for(int i=n;i>=1;--i){
		char a=x+i; 
		for(int j=1;j<=i;++j){
			printf("%c",a++); 
		} 
		printf("\n"); 
	} 
} 
