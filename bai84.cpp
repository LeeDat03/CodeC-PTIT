#include<stdio.h>
#include<math.h>

int prime(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=2;i<=n/2;++i){
			int x=n-i;
			if(prime(i)==1 && prime(x)==1) printf("%d %d ",i,x);
		}
		printf("\n");
	}
}
