#include<stdio.h>

int check(long long n){
	if(n==0||n==1) return 1;
	else{
		long long a=0,b=1,c;
		while(b<n){
			c=a+b;
			a=b;
			b=c;
		}
		return c==n;
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
