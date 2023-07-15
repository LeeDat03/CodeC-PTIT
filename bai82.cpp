#include<stdio.h>

int check(long long n){
	if(n%2==0) return 0;
	else{
		int a,even=0,odd=0;
		while(n){
			a=n%10;
			if(a%2) ++odd;
			else ++even;
			n/=10;
		}
		return odd>even;
	}
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
