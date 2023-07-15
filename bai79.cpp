#include<stdio.h>

int giam(long long n){
	int a,b; 
	while(n>=10){
		a=n%10;
		n/=10;
		b=n%10;
		if(b<=a) return 0; 
	} 
	return 1; 
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b,cout=0;
		scanf("%lld%lld",&a,&b);
		for(long long i=a;i<=b;++i){
			if(giam(i)){
				++cout;
			}
		}
		printf("%d\n",cout);
	}
}
