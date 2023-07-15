#include<stdio.h>
#include<math.h>

long long min(long long n){
	long long tmp=0;
	int x=0;
	while(n){
		int a=n%10;
		if(a==6) a=5;
		tmp+=a*pow(10,x);
		++x;
		n/=10;
	}
	return tmp;
}

long long max(long long n){
	long long tmp=0;
	int x=0;
	while(n){
		int a=n%10;
		if(a==5) a=6;
		tmp+=a*pow(10,x);
		++x;
		n/=10;
	}
	return tmp;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",min(a)+min(b),max(a)+max(b));
	}
}
