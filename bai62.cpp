#include<stdio.h>

int gt(int n){
	int s=1;
	for(int i=1;i<=n;++i){
		s*=i;
	}
	return s;
}

int tong(int n){
	int s=0,tmp=n;
	while(n){
		int a=n%10;
		s+=gt(a);
		n/=10;
	}
	return tmp==s;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		if(tong(i)) printf("%d ",i);
	}
}
