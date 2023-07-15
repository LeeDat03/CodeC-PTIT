//6 4
//1234
//234		1
//34		21
//4			321
//5			321
//6			321
 
#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=0;i<a;++i){
		for(int j=1;j<=b-i;++j){
			printf("%d",i+j);
		}
		for(int j=i;j>=1 && j<b;--j){
			printf("%d",j); 
		} 
		if(i==b) break;
		printf("\n");	
	}	  
	if(a>b){
		for(int i=b+1;i<=a;++i){
			printf("%d",i);
			for(int j=b-1;j>=1;--j){
 				printf("%d",j); 
		}
		printf("\n"); 
		} 
	} 
}
