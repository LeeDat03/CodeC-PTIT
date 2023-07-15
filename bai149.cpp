#include<stdio.h>

int stn(long long n){
	long long a=0,tmp=n;
	while(n){
		a=a*10+n%10;
		n/=10;
	}
	return a==tmp;
}

int tong(long long n){
	int a=0,x,d=0;
	while(n){
		x=n%10;
		if(x==6) ++d;
		a+=x;
		n/=10;
	}
	if(d==0) return 0;
	else if(a%10!=8) return 0;
	return 1;
}

int min(int a,int b){
	return a<b ? a:b;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=min(a,b);i<=a+b-min(a,b);++i){
		if(stn(i)==1&&tong(i)==1) printf("%d ",i);
	}
}
