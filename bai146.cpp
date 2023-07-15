#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long vt=0;
		for(int i=2;i<=sqrt(n);++i){
			while(n%i==0){
				vt=i;
				n/=i;
			}
		}
		if(n!=1) vt=n;
		printf("%lld\n",vt);
	}	
}
