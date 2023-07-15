#include<stdio.h>

int head(long long n){
	int a=n%10,b;
	while(n){
		b=n%10;
		n/=10;
	}
	if(a*2==b || b*2==a) return 1;
	return 0;
}

long long stn(long long n){
	long long s=0;
	while(n){
		s=s*10+n%10;
		n/=10;
	}
	return s;
}

int check(long long n){
	if(head(n)==0) return 0;
	long long s=0;
	n/=10;
	while(n>10){
		s=s*10+n%10;
		n/=10;
	}
	if(stn(s)==0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}
