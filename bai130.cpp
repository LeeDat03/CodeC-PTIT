#include<stdio.h>
#include<math.h>

long long tong(int n){
	long long s=0;
	for(int i=2;i<=sqrt(n);++i){
		while(n%i==0){
			s+=i;
			n/=i;
		}
	}
	if(n!=1) s+=n;
	return s;
}

int main(){
	int n;
	long long s=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i) s+=tong(a[i]);
	printf("%lld",s);
}
