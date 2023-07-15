#include<stdio.h>
#include<math.h>

long long uoc(long long n){
	long long x=0;
	for(int i=2;i<=sqrt(n);++i){
		while(n%i==0){
			x=i;
			n/=i;
		}
	}
	if(n!=1) x=n;
	return x;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",uoc(n));
	}
	
}
