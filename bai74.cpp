#include<stdio.h>
#include<math.h>

int gcd(int n){
	if(n%2==1) return 0;
	else{
		int a,b=sqrt(n),d=0;
		for(int i=1;i<=sqrt(n);++i){
			if(n%i==0){
				a=n/i;
				if(i%2==0) ++d;
				if(a%2==0) ++d;
			}
		}
		if(b*b==n && b%2==0) --d;
		return d;
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",gcd(n));
	}
}






