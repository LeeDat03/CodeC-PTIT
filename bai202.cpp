#include<stdio.h>
#include<math.h>

int snt(long long n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>1;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		long long d=0;
		scanf("%lld%lld",&a,&b);
		for(long long i=a;i<=b;++i){
			if(snt(sqrt(i))==1) ++d;
		}
		printf("%lld\n",d);
	}
}
