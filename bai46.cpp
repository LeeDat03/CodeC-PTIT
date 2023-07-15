//4 4 
//4321
//321		2
//21		23
//1			234
//
//
//4 6
//654321
//54321			2
//4321			23	
//321			234

#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		for(int i=a;i>b;--i){
			int tmp=i;
			for(int j=1;j<=b;++j){
				printf("%d",tmp--);
			}
			printf("\n");
		}
	}
		for(int i=0;i<a;++i){
			for(int j=b-i;j>=1;--j){
				printf("%d",j);
			}
			for(int j=2;j<=i+1;++j){
				printf("%d",j);
			}
			printf("\n");
			if(i==b-1) break;
		}
}
