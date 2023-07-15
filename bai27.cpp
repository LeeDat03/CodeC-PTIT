#include<stdio.h>
int main(){
	int m,a,n,s=0,giaithua;
	scanf("%d",&n);
	m=n; 
	while(n!=0){
		a=n%10;
		n/=10;
		giaithua=1; 
		for(int i=1;i<=a;++i){
			giaithua=giaithua*i;
		}
		s+=giaithua; 
	}
	if(m==s){
		printf("1"); 
	}else{
		printf("0"); 
	} 
}
