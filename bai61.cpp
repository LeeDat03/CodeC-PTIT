#include<stdio.h>
#include<math.h>

int min(int a,int b){
	if(a<=b) return a;
	return b;
}

int tong(int n){
	int s=1,x=sqrt(n);
	for(int i=2;i<=x;++i){
		if(!(n%i)) s+=i+n/i;
	}
	if(x*x==n) s-=x;
	return s;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=min(a,b);i<=a+b-min(a,b);++i){
		if(i==tong(i)) printf("%d ",i);
	}
}
