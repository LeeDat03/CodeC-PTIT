#include<stdio.h>
#include<math.h>

int main(){
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int d=0;
		int x=sqrt(n);
		for(int i=1;i<=x;++i){
			if(n%i==0){
				int a=n/i;
				if(i%2==0) ++d;
				if(a%2==0) ++d;
			}
		}
		if(x*x==n && x%2==0) --d;
		printf("%d\n",d);
	}
}
