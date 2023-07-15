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

int min(int a,int b){
	return a<=b ? a:b;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=min(n,m);i<=n+m-min(n,m);++i){
		if(tong(i)) printf("%d ",i);
	}
}
