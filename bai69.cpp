#include<stdio.h>

int check(long long n){
	while(n){
		if(n%2) return 0;
		n/=10; 
	} 
	return 1; 
} 

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a;
		scanf("%lld",&a);
		if(check(a)) printf("YES\n");
		else printf("NO\n"); 
	} 
} 
