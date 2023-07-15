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
		int n,m;
		scanf("%d%d",&n,&m);
		long long tmp=n;
		for(int i=n;i<=m;++i){
			tmp=bcnn(tmp,i);
		}
		printf("%lld\n",tmp);
	}
}
