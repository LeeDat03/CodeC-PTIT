#include<stdio.h>
#include<math.h>

int tong(int n){
	int s=1,x=sqrt(n);
	for(int i=2;i<=x;++i){
		if(!(n%i)) s+=i+n/i;
	}
	if(x*x==n) s-=x;
	return s;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;++i){
		if(i==tong(i)) printf("%d ",i);
	}
}
