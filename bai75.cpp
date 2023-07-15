#include<stdio.h>

int stn(long long n){
	int tmp=n,s=0;
	while(n){
		s=s*10+n%10;
		n/=10;
	}
	return s==tmp;
}

int sum(long long n){
	int s=0;
	while(n){
		s+=n%10;
		n/=10;
	}
	return s;
}

int check(long long n){
	if(stn(n)==0 || sum(n)%2==0) return 0;
	int a;
	while(n){
		a=n%10;
		if(!(a%2)) return 0;
		n/=10;
	}
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
