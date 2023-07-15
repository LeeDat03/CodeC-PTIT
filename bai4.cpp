#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	for(int i=1;i<=a;++i){
		scanf("%d",&b);
		printf("%lld\n",(long long)b*b); 
	}
	return 0; 
} 
