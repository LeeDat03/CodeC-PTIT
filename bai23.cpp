#include<stdio.h>
int main(){
	int a,b,s=0;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;++i){
			s+=i;
		}
	}else{
		for(int i=b;i<=a;++i){
			s+=i;
		}
	}
	printf("%d",s);
	return 0;
}
