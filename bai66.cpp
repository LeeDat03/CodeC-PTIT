#include<stdio.h>

long long ucln(long long a,long long b){
	if(!b) return a;
	while(b){
		long long r=a%b;
		a=b;
		b=r; 
	}
	return a; 
} 

long long bcnn(long long a,long long b){
	return a*b/ucln(a,b); 
} 

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",bcnn(a,b),ucln(a,b)); 
	} 
} 
