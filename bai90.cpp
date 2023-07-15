#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long a[n];
		memset(a,1,sizeof(a));
		for(int i=2;i<=n;++i){
			a[i]=a[i-1]+a[i-2];
		}
		printf("%lld\n",a[n]);
	}
}
