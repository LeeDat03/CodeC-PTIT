#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	long long s=0,x=0;
	while(n){
		int a=n%2;
		s+=a*pow(10,x);
		++x;
		n/=2;
	}
	printf("%lld",s);
}
