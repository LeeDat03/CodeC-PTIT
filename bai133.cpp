#include<stdio.h>
#include<math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>1;
}

int main(){
	long long n;
	scanf("%lld",&n);
	long long tmp=n;
 	int b[10]={0};
	while(n!=0){
		int a=n%10;
		if(snt(a)) ++b[a];
		n/=10;
	}
	for(int i=2;i<9;++i){
		if(b[i]){
			printf("%d %d\n",i,b[i]);
		}
	}
}
