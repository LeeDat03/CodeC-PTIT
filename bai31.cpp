#include<stdio.h>
int main(){
	int rong,cao;
	scanf("%d%d",&rong,&cao);
	for(int i=1;i<=rong;++i){
		printf("*");
	}
	printf("\n");
	for(int i=1;i<=(cao-2);++i){
		printf("*");
		for(int j=1;j<=(rong-2);++j){
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=1;i<=rong;++i){
	printf("*");
	}
	
}
