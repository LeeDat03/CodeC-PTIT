//	4 4
//1234
//234	3
//34	32
//4		321
		
#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=0;i<a && i<b;++i){
		for(int j=1;j<=b-i;++j){
			printf("%d",i+j);
		}
		for(int j=1;j<=i;++j){
			printf("%d",b-j);
		}
		if(i==b) break;
		printf("\n");
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
