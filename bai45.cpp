//4 4
//1			234
//21		23
//321		2
//4321
//
//4 6
//1			23456
//21		2345
//321		234
//4321		23

//6 4
//1			234
//21		23
//321		2
//4321
//5432
//6432
#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;++i){
		int s=2;
		for(int j=i;j>=1;--j){
			printf("%d",j);
		}
		for(int j=1;j<=b-i;++j){
			printf("%d",s++);
		}
		printf("\n");
		if(i==b) break;
	}
	if(a>b){
		for(int i=b+1;i<=a;++i){
			int s=i;
			printf("%d",i);
			for(int j=1;j<=b-1;++j){
				printf("%d",--s);
			}
			printf("\n");
		}
	}
}
