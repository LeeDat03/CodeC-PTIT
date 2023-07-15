#include<stdio.h>

long long bcnn(long long a,long long b){
	long long x=a*b;
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return (long long)x/a;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		long long tmp=1;
		for(int i=1;i<=a;++i){
			tmp=bcnn(tmp,i);
		}
		printf("%lld\n",tmp);
	}
}
